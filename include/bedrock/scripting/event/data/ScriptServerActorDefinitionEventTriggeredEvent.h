#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorDefinitionEventTriggeredEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorDefinitionEventTriggeredEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorDefinitionEventTriggeredEvent();
    void setActorId(ActorUniqueID const&);
    void setEventId(std::string const&);
    std::string getName();
};
