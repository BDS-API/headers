#pragma once

class ScriptCommand {

public:

    void ScriptCommand(ScriptCommand&&);
    void ScriptCommand(std::string const&, unsigned int);
};
