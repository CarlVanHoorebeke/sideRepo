#include "read-info.hh"
#include <string>

bool read_info(std::istream& file, DirectoryInfo& dir_info)
{
    std::string token_;

    if (file.eof() || file.bad())
        return false;
    if (std::getline(file, token_)){
        std::stringstream token(token_);
        if (token >> token_)
            dir_info.name_ = token_;
        else
            return false;

        if (token >> token_)
            dir_info.size_ = stoi(token_);
        else
            return false;

        if (token >> token_){
            std::stringstream tmp(token_);
            tmp >> std::oct >> dir_info.rights_;
        }
        else
            return false;

        if (token >> token_)
            dir_info.owner_ = token_;
        else
            return false;
        if (token >> token_)
            return false;
    }
    return true;
}