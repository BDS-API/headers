#pragma once

#include <string>


class ScriptCommand {

public:
    ScriptCommand(ScriptCommand &&); // _ZN13ScriptCommandC2EOS_
    ~ScriptCommand(); // _ZN13ScriptCommandD2Ev
    ScriptCommand(std::string const&, unsigned int); // _ZN13ScriptCommandC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEj
};
