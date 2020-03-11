#pragma once

#include "./ScriptCommand.h"
#include <string>


class ScriptCommand {

public:

    ScriptCommand(ScriptCommand &&);
    ~ScriptCommand();
    ScriptCommand(std::string const&, unsigned int);
};
