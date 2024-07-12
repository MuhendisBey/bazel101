#include "echo.hpp"

std::ostringstream Echo::doEcho(const std::string& msg)
{
    std::ostringstream ss;
    ss << "Bazel says: "<< "\"" << msg << "\"";
    return ss;
}