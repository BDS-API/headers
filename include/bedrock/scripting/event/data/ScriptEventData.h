#pragma once

#include "../../../../unmapped/ScriptEngine"


class ScriptEventData {

public:
    virtual ScriptEventData::~ScriptEventData();

    ScriptEventData(std::string const&);
    void serialize(ScriptEngine &, EventInfo &, ScriptApi::ScriptObjectHandle &)const;
};
