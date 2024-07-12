#include <iostream>
#include "echo.hpp"

int main (int argc, char** argh)
{
    std::cout << Echo::doEcho("Hello friends!").str() << "\n";
}