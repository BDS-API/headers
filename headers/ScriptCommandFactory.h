#pragma once

class ScriptCommandFactory {

public:
    static long ScriptCommandFactory::mIdMutex;
    static long ScriptCommandFactory::mCurrentId;


    void createScriptCommand(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void _getNextId(void);
};
