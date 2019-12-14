#pragma once

class ScriptCommandFactory {

public:
    static long ScriptCommandFactory::mIdMutex;
    static long ScriptCommandFactory::mCurrentId;


    void createScriptCommand(std::string const&);
    void _getNextId(void);
};
