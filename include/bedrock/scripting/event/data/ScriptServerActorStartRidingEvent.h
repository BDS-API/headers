#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorStartRidingEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorStartRidingEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorStartRidingEvent();
    void setActorId(ActorUniqueID const&);
    void setRideEntityId(ActorUniqueID const&);
    std::string getName();
};
