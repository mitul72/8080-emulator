#include "disassember.hpp"
#include <fstream>
#include <string>
#include <iostream>

int Disassember::Disassemble8080Op(unsigned char *codebuffer, int pc)
{

    return 0;
}

void Disassember::DisassembleFromFile()
{
    std::string line{};
    std::ifstream invaders_hex("invaders_hex.txt");
    while (invaders_hex.eof() == 0)
    {
        std::getline(invaders_hex, line);
        std::cout << line << std::endl;
    }
}