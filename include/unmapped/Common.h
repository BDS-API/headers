#pragma once

#include <string>


class Common {

public:

    std::string getGameVersionString();
    std::string getGameVersionStringNet();
    std::string getGameSemVerString();
    std::string getServerVersionString();
    std::string getGameDevVersionString();
    std::string getGameDevGitBranchString();
    std::string getGameDevGitShaString();
    std::string getGameDevInfoString();
    std::string getBuildDateISOString();
    std::string getBuildFlavor();
};
