#pragma once

#include <string>


namespace ScriptCommandFactory {

    static long mIdMutex;
    static long mCurrentId;

    void createScriptCommand(std::string const&); // _ZN20ScriptCommandFactory19createScriptCommandERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void _getNextId(); // _ZN20ScriptCommandFactory10_getNextIdEv
};
