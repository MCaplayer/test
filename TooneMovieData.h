#ifndef TOONEMOVIEDATA_H
#define TOONEMOVIEDATA_H

#include "pch.h"
#include <string> // 包含 string 头文件

class TooneMovieData {
public:
    TooneMovieData();
    ~TooneMovieData();

    // 只保留一个 GetMovieName 函数声明
    const std::string& GetMovieName() const;
    void SetMovieName(std::string movieName);

    void SetDirector(std::string director);
    const std::string& GetDirector() const;

    void SetID(const std::string& id);
    const std::string& GetID() const;

private:
    std::string m_id;
    std::string m_movieName;
    std::string m_director;
};

#endif // TOONEMOVIEDATA_H