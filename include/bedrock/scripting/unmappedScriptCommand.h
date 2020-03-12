#pragma once

#include <string>


class ScriptCommand {

public:
    ~ScriptCommand();
    ScriptCommand(std::string const&, unsigned int);
    ScriptCommand(ScriptCommand &&);
};
