#pragma once

#include <string>


namespace Common {

    std::string getBuildFlavor();
    std::string getBuildDateISOString();
    std::string getServerVersionString();
    std::string getGameSemVerString();
    std::string getGameDevVersionString();
    std::string getGameVersionString();
    std::string getGameVersionStringNet();
    std::string getGameDevGitBranchString();
    std::string getGameDevInfoString();
    std::string getGameDevGitShaString();
};
