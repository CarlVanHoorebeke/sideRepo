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
            token.replace(found, src_token.size(), dst_token);
            found += dst_token.size();
            found = token.find(src_token, found);
        }

        file_out << token << "\n";
    }
}