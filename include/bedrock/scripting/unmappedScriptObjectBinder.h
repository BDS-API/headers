#pragma once

#include "../ScriptObjectHandle.h"
#include "./ScriptEngine.h"
#include <string>


class ScriptObjectBinder {

public:
    static std::string TYPE_TAG;


    void extract(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ScriptObjectBinder(std::string const&);
    ~ScriptObjectBinder();
    std::string getTypeIdentifier()const;
    void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    void _getComponentIndex(unsigned short)const;
    void _hasComponent(unsigned short)const;
};
