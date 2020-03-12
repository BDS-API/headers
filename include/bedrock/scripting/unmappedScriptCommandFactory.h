#pragma once

#include <string>


namespace ScriptCommandFactory {

    static long mIdMutex;
    static long mCurrentId;

    void _getNextId();
    void createScriptCommand(std::string const&);
};
