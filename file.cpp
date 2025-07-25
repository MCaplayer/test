#include "file.h"
#include <fstream>
#include <string>

size_t appendNextLine(const std::string& filename,
                           const std::string& newLine)
{
    std::ifstream fin(filename);
    size_t lineCount = 0;
    std::string tmp;
    while (std::getline(fin, tmp)) ++lineCount;
    fin.close();


    std::ofstream fout(filename, std::ios::app);
    if (!fout) throw std::runtime_error("无法打开文件: " + filename);
    fout << newLine << '\n';

    return lineCount + 1;
}