#pragma once

#include "../../../../unmapped/EventInfo"
#include "../../ScriptObjectHandle"
#include "../../unmapped/ScriptEngine"


class ScriptEventData {

public:
    ScriptEventData::~ScriptEventData()

    ScriptEventData(std::string const&);
    void serialize(ScriptEngine &, EventInfo &, ScriptApi::ScriptObjectHandle &)const;
};
