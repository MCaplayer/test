#include "pch.h"
#include "CountLines.h"
#include <fstream>
#include <string>

int CountLines(const char* filename)
{
    std::ifstream in(filename);
    int n = 0;
    std::string tmp;
    while (std::getline(in, tmp))
    {
        ++n;
    }
    return n;
}