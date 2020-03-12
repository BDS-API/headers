#pragma once

#include <string>


namespace ScriptCommandFactory {

    static long mIdMutex;
    static long mCurrentId;

    void createScriptCommand(std::string const&);
    void _getNextId();
};
