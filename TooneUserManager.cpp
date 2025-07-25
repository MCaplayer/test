#include "pch.h"
#include "TooneUserManager.h"

TooneUserManager::TooneUserManager()
{
}

TooneUserManager::~TooneUserManager()
{
}

#include <fstream>

void TooneUserManager::LoadUserData()
{
    std::ifstream fin("userdata.json");
    if (!fin.is_open())
    {
        printf("出错，无法打开userdata.json");
        return;
    }

    std::string line;
    while (std::getline(fin, line))
    {
        auto v = line
            | std::views::split(',')
            | std::views::transform([](auto word){
                 return std::string(word.begin(), word.end());
             });

        std::vector<std::string> strArr(v.begin(), v.end());

        TooneUserData userData;
        userData.SetUserName(strArr[0]);
        userData.SetPassword(strArr[1]);
        userData.SetID(strArr[2]);

        m_AllUser.push_back(userData);
    }
}

void TooneUserManager::SaveUserData()
{
    std::ofstream fout("userdata.json", std::ios::trunc);

    for (const auto& user : m_AllUser)
    {
        std::string strData = std::format("{},{},{}",user.GetUserName(), user.GetPassword(), user.GetID());
        fout << strData << std::endl;
    }

}

std::string TooneUserManager::CheckUserData(TooneUserData const &userData)
{
    for (auto& user : m_AllUser)
    {
        if (user.GetUserName() == userData.GetUserName())
        {
            return "错误，用户名已经存在\n";
        }
    }

    return "ok";
}

std::string TooneUserManager::RegisterUser(const TooneUserData& userData)
{
    std::string result = CheckUserData(userData);
    if (result != "ok")
        return result;

    m_AllUser.push_back(userData);

    SaveUserData();
    return "ok";
}

std::string TooneUserManager::LoginUser(TooneUserData const &userData)
{
    std::string line;
    for (auto& user : m_AllUser)
    {
        if (userData.GetUserName() == user.GetUserName() &&
            userData.GetPassword() == user.GetPassword())
        {
            return "ok";
        }
    }
    return "!ok";
}

TooneUserManager s_TooneUserManager;

