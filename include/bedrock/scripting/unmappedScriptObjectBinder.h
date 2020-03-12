#pragma once

#include <string>


class ScriptObjectBinder {

public:
    static std::string TYPE_TAG;

    std::string getTypeIdentifier()const;
    void extract(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    ~ScriptObjectBinder();
    void _getComponentIndex(unsigned short)const;
    void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    void _hasComponent(unsigned short)const;
    ScriptObjectBinder(std::string const&);
    void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
};
