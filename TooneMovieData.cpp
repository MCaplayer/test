#include "TooneMovieData.h"

TooneMovieData::TooneMovieData() {}
TooneMovieData::~TooneMovieData() {}

// 修改返回类型为 const std::string&
const std::string& TooneMovieData::GetMovieName() const
{
    return m_movieName;
}

void TooneMovieData::SetMovieName(std::string movieName)
{
    m_movieName = std::move(movieName);
}

// 修改返回类型为 const std::string&
const std::string& TooneMovieData::GetDirector() const
{
    return m_director;
}

void TooneMovieData::SetDirector(std::string director)
{
    m_director = std::move(director);
}

void TooneMovieData::SetID(const std::string& id)
{
    m_id = id;
}

const std::string& TooneMovieData::GetID() const
{
    return m_id;
}