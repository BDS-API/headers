#pragma once

class ScriptEventData {

public:
    virtual ~ScriptEventData();

    void ScriptEventData(std::string const&);
    void serialize(ScriptEngine &, EventInfo &, ScriptApi::ScriptObjectHandle &)const;
};
