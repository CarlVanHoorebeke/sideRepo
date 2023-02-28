#pragma once

#include "directory-info.hh"
#include <istream>
#include <iomanip>
#include <fstream>
#include <iostream>
#include <sstream>

bool read_info(std::istream& file, DirectoryInfo& dir_info);