#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"


class ScriptServerActorStartRidingEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorStartRidingEvent();
    void getHash();
    ScriptServerActorStartRidingEvent();
    std::string getName();
    void setRideEntityId(ActorUniqueID const&);
    void setActorId(ActorUniqueID const&);
};
