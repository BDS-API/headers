#pragma once



class ScriptCommandFactory {

public:
    static long mIdMutex;
    static long mCurrentId;


    void createScriptCommand(std::string const&);
    void _getNextId();
};
