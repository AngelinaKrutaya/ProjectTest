#include <iostream>
#include <fstream>
#include "ParseLib.h"

int main() {
    std::string line;
    std::ifstream in;
    std::ofstream out;
    out.open("output.txt");
    in.open("input.txt"); 
    if (in.is_open())
    {
        while (getline(in, line))
        {
            ParseLib::Update(line);
            out << line << std::endl;
        }
    }
    in.close();
    out.close();
    return 0;
}