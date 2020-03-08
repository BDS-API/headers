#pragma once

#include "../ScriptObjectHandle"


class ScriptObjectBinder {

public:
    static long TYPE_TAG[abi:cxx11];


    void extract(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ScriptObjectBinder(std::string const&);
    void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    void _getComponentIndex(unsigned short)const;
    void _hasComponent(unsigned short)const;
};
