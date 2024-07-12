#include <iostream>
#include <string>
#include "lib/echo.hpp"

class Main final
{
    public: 
        static int main( int argc, char** argv)
        {
            std::cout << Echo::doEcho("This is glob example!").str() << "\n";
            return 0;
        }
};

int main (int argc, char** argv)
{
    return Main::main(argc, argv);
}