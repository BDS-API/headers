#pragma once

class ScriptObjectBinder {

public:

    void extract(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    void ScriptObjectBinder(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void deserialize(ScriptEngine &, ScriptApi::ScriptObjectHandle const&)const;
    void _getComponentIndex(unsigned short)const;
    void _hasComponent(unsigned short)const;
};
