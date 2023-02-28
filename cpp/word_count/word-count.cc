#include "word-count.hh"

#include <fstream>
#include <iostream>
#include <string>

ssize_t word_count(const std::string& filename)
{
    auto i = 0;
    std::string tmp;
    std::ifstream file_in;
    file_in.open(filename);

    if (!file_in.is_open())
    {
        return -1;
    }

    while (file_in >> tmp)
    {
        i++;
    }
    return i;
}