#pragma once

class ScriptObjectBinder {

public:

    void extract(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    void ScriptObjectBinder(std::string const&);
    void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    void _getComponentIndex(unsigned short)const;
    void _hasComponent(unsigned short)const;
};
