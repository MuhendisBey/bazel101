#include <iostream>
#include <string>
#include "lib/adder.hpp"

class Main final
{
    public: 
        static int main( int argc, char** argv)
        {
            std::cout << Adder<std::string>::add("Hi", "from") << "\n";
            std::cout << Adder<int>::add(1, 2) << "\n";

            return 0;
        }
};

int main (int argc, char** argv)
{
    return Main::main(argc, argv);
}