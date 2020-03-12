#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"


class ScriptServerActorStopRidingEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorStopRidingEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void getHash();
    void setActorId(ActorUniqueID const&);
    void setSwitchingRides(bool);
    ScriptServerActorStopRidingEvent();
    void setEntityIsBeingDestroyed(bool);
    std::string getName();
    void setExitFromRider(bool);
};
