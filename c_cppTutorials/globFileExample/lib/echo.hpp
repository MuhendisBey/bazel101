#include <string>
#include <sstream>

 class Echo final
{
    public:
        static std::ostringstream doEcho(const std::string& msg);
};