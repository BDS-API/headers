#pragma once

class ScriptEventData {

public:
    virtual ~ScriptEventData();

    void ScriptEventData(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void serialize(ScriptEngine &, EventInfo &, ScriptApi::ScriptObjectHandle &)const;
};
