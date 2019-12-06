#pragma once

class CustomScriptEventData : ScriptEventData {

public:
    virtual ~CustomScriptEventData();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void CustomScriptEventData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setData(ScriptEngine &, ScriptApi::ScriptObjectHandle const&);
    void setData(Json::Value const&);
    void setData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
