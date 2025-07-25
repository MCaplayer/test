#include "pch.h"
#include "TooneMovieManager.h"


TooneMovieManager::TooneMovieManager()
{

}

TooneMovieManager::~TooneMovieManager()
{

}

void TooneMovieManager::ReadAllMovie()
{
    TooneMovieData movieData;

    m_AllMovieList.push_back(movieData);
}

void TooneMovieManager::LoadMovieData()
{
    std::ifstream fin("movielist.json");
    if (!fin.is_open())
    {
        printf("出错，无法打开movielist.json");
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

        TooneMovieData movieData;
        movieData.SetMovieName(strArr[0]);
        movieData.SetDirector(strArr[1]);
        movieData.SetID(strArr[2]);

        m_AllMovieList.push_back(movieData);
    }
}

void TooneMovieManager::SaveMovieData()
{
    std::ofstream fout("moviedata.json", std::ios::trunc);

    for (const auto& movie : m_AllMovieList)
    {
        std::string strData = std::format("{},{},{}",movie.GetMovieName(), movie.GetDirector(), movie.GetID());
        fout << strData << std::endl;
    }

}

std::string TooneMovieManager::CheckMovieData(TooneMovieData const &movieData)
{
    for (auto& movie : m_AllMovieList)
    {
        if (movie.GetMovieName() == movieData.GetMovieName()) 
        {
            return "错误，该电影名已经存在\n";
        }
    }

    return "ok";
}

std::string TooneMovieManager::AddMovie(const TooneMovieData& movieData)
{
    std::string result = CheckMovieData(movieData);
    if (result != "ok")
        return result;

    m_AllMovieList.push_back(movieData);

    SaveMovieData();
    return "ok";
}

TooneMovieManager s_TooneMovieManager;
