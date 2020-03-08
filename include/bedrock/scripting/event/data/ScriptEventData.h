#pragma once

#include "../../../../unmapped/EventInfo"
#include "../../unmapped/ScriptEngine"
#include "../../ScriptObjectHandle"


class ScriptEventData {

public:
    virtual ScriptEventData::~ScriptEventData()

    ScriptEventData(std::string const&);
    void serialize(ScriptEngine &, EventInfo &, ScriptApi::ScriptObjectHandle &)const;
};
