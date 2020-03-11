#pragma once

#include "../../ScriptObjectHandle.h"
#include "../../unmapped/ScriptEngine.h"
#include "../../../../unmapped/EventInfo.h"
#include <string>


class ScriptEventData {

public:
    virtual ~ScriptEventData();

    ScriptEventData(std::string const&);
    void serialize(ScriptEngine &, EventInfo &, ScriptApi::ScriptObjectHandle &)const;
    std::string getName()const;
};
