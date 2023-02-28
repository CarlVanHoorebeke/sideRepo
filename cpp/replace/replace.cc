#include "replace.hh"

#include <fstream>
#include <iostream>
#include <string>

void replace(const std::string& input_filename,
             const std::string& output_filename, const std::string& src_token,
             const std::string& dst_token)
{
    std::ifstream file_in(input_filename);
    std::ofstream file_out(output_filename);
    std::string token;
    std::string sub_token;

    if (!file_in.is_open()){
        std::cerr << "Cannot open input file";
        return;
    }
     if (!file_out.is_open()){
        std::cerr << "Cannot write output file";
        return;
    }

    while (std::getline(file_in, token))
    {
        size_t found = token.find(src_token);
        while (found != std::string::npos)
        {
            token.replace(found, src_token.length(), dst_token);
            found = token.find(src_token, found + 1);
        }

        file_out << token << "\n";
    }
}