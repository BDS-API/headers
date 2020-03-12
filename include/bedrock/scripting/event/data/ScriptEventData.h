#pragma once

#include <string>


class ScriptEventData {

public:
    ~ScriptEventData();
    void serialize(ScriptEngine &, EventInfo &, ScriptApi::ScriptObjectHandle &)const;
    ScriptEventData(std::string const&);
    std::string getName()const;
};
