#ifndef TOONEMOVIEDATA_H
#define TOONEMOVIEDATA_H

#include "pch.h"

class TooneMovieData {
public:
    TooneMovieData();
    ~TooneMovieData();

    void SetMovieName(std::string movieName);
    std::string GetMovieName();

    void SetDirector(std::string director);
    std::string GetDirector();

    void GetMovieName(const std::string & string);

    void SetID(const std::string& id);

private:
    std::string m_id;
    std::string m_movieName;
    std::string m_director;
};

#endif // TOONEMOVIEDATA_H