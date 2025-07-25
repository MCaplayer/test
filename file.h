#ifndef FILE_H
#define FILE_H

#include <string>
#include <stdexcept>

// 将 newLine 追加到文件 filename 的下一行，返回写入的行号（从 1 开始）
std::size_t appendNextLine(const std::string& filename,
                           const std::string& newLine);

#endif  // FILE_H