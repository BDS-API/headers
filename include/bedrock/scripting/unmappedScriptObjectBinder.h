#pragma once

#include "ScriptEngine.h"
#include "../ScriptObjectHandle.h"
#include <string>


class ScriptObjectBinder {

public:
    static std::string TYPE_TAG;

    std::string getTypeIdentifier()const;
    ScriptObjectBinder(std::string const&);
    void _getComponentIndex(unsigned short)const;
    void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    void _hasComponent(unsigned short)const;
    void extract(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ~ScriptObjectBinder();
    void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
};
