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

