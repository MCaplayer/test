cmake_minimum_required(VERSION 3.31)
project(test)

set(CMAKE_CXX_STANDARD 20)

add_executable(test main.cpp
        TooneUserData.cpp
        TooneUserData.h
        pch.h
        CountLines.cpp
        CountLines.h
        WelcomeText.cpp
        WelcomeText.h
        Information.cpp
        Information.h
        Enroll.cpp
        Enroll.h
        Login.cpp
        Login.h
        Logout.cpp
        Logout.h
        UserText.cpp
        UserText.h
        TooneMovieData.cpp
        TooneMovieData.h
        TooneMovieManager.cpp
        TooneMovieManager.h
        file.cpp
        file.h
        TooneUserManager.cpp
        TooneUserManager.h
        utils.cpp
        utils.h
        LoginMovieList.cpp
        LoginMovieList.h
        LoginWatchList.cpp
        LoginWatchList.h)
