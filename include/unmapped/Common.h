#pragma once

#include <string>


namespace Common {

    std::string getGameVersionString(); // _ZN6Common20getGameVersionStringB5cxx11Ev
    std::string getGameVersionStringNet(); // _ZN6Common23getGameVersionStringNetB5cxx11Ev
    std::string getGameSemVerString(); // _ZN6Common19getGameSemVerStringB5cxx11Ev
    std::string getServerVersionString(); // _ZN6Common22getServerVersionStringB5cxx11Ev
    std::string getGameDevVersionString(); // _ZN6Common23getGameDevVersionStringB5cxx11Ev
    std::string getGameDevGitBranchString(); // _ZN6Common25getGameDevGitBranchStringB5cxx11Ev
    std::string getGameDevGitShaString(); // _ZN6Common22getGameDevGitShaStringB5cxx11Ev
    std::string getGameDevInfoString(); // _ZN6Common20getGameDevInfoStringB5cxx11Ev
    std::string getBuildDateISOString(); // _ZN6Common21getBuildDateISOStringB5cxx11Ev
    std::string getBuildFlavor(); // _ZN6Common14getBuildFlavorB5cxx11Ev
};
