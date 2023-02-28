#include "invalid-argument.hh"
#include <sstream>

InvalidArgumentException::InvalidArgumentException(const std::string& msg)
{
    msg_ = msg;
}

const char* InvalidArgumentException::what() const noexcept
{
    return msg_.c_str();
}