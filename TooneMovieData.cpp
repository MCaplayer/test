#include "TooneMovieData.h"

TooneMovieData::TooneMovieData() {}
TooneMovieData::~TooneMovieData() {}

void TooneMovieData::SetMovieName(std::string movieName)
{
    m_movieName = movieName;


}
std::string TooneMovieData::GetMovieName() { return m_movieName; }

void TooneMovieData::SetDirector(std::string director) { m_director = director; }
std::string TooneMovieData::GetDirector() { return m_director; }

void TooneMovieData::SetID(const std::string& id) {
    m_id = id;
}