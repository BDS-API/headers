#pragma once



class ScriptCommand {

public:

    ScriptCommand(ScriptCommand&&);
    ScriptCommand(std::string const&, unsigned int);
};
