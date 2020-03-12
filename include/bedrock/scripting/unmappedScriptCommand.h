#pragma once

#include <string>


class ScriptCommand {

public:
    ScriptCommand(ScriptCommand &&);
    ScriptCommand(std::string const&, unsigned int);
    ~ScriptCommand();
};
