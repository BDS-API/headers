#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorStopRidingEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorStopRidingEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorStopRidingEvent();
    void setActorId(ActorUniqueID const&);
    void setExitFromRider(bool);
    void setEntityIsBeingDestroyed(bool);
    void setSwitchingRides(bool);
    std::string getName();
};
