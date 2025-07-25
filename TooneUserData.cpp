#include "pch.h"
#include "TooneUserData.h"

TooneUserData::TooneUserData()
{
}

TooneUserData::~TooneUserData()
{
}

void TooneUserData::SetID(std::string id)
{
    m_id = id;
}

std::string TooneUserData::GetID() const
{
    return m_id;
}

void TooneUserData::SetUserName(std::string username)
{
    m_UserName = username;
}

std::string TooneUserData::GetUserName() const
{
    return m_UserName;
}

void TooneUserData::SetPassword(std::string password)
{
    m_Password = password;
}

std::string TooneUserData::GetPassword() const
{
    return m_Password;
}
