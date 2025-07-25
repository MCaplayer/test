#include "pch.h"

#ifndef TOONEMOVEMANAGER_H
#define TOONEMOVEMANAGER_H
#include "TooneMovieData.h"


class TooneMovieManager
{
public:
    TooneMovieManager();
    ~TooneMovieManager();

    void ReadAllMovie();

    void LoadMovieData();

    void SaveMovieData();

    std::string CheckMovieData(TooneMovieData const &userData);

    std::string AddMovie(const TooneMovieData &movieData);

private:
    std::list<TooneMovieData> m_AllMovieList;
};


#endif //TOONEMOVEMANAGER_H
