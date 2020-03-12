#pragma once

#include <string>
#include "../../unmapped/ScriptEngine.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerActorDefinitionEventTriggeredEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorDefinitionEventTriggeredEvent();
    void getHash();
    ScriptServerActorDefinitionEventTriggeredEvent();
    void setEventId(std::string const&);
    void setActorId(ActorUniqueID const&);
    std::string getName();
};
