#include <list>

#ifndef TOONEMOVEMANAGER_H
#define TOONEMOVEMANAGER_H
#include "TooneMovieData.h"


class TooneMovieManager
{
public:
    TooneMovieManager();
    ~TooneMovieManager();

    void ReadAllMovie();

private:
    std::list<TooneMovieData> m_AllMovieList;
};


#endif //TOONEMOVEMANAGER_H
