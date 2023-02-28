#include "stdin-to-file.hh"

void stdin_to_file()
{
    std::ofstream file_out;
    std::string token;
    file_out.open("file.out");
    while (std::cin >> token)
    {
        file_out << token << "\n";
    }
}