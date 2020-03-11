#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorCreatedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorCreatedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorCreatedEvent();
    void setActorId(ActorUniqueID const&);
    std::string getName();
};
