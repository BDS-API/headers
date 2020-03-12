#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "../../../../unmapped/EventInfo.h"
#include <string>
#include "../../ScriptObjectHandle.h"


class ScriptEventData {

public:
    ~ScriptEventData();
    ScriptEventData(std::string const&);
    std::string getName()const;
    void serialize(ScriptEngine &, EventInfo &, ScriptApi::ScriptObjectHandle &)const;
};
