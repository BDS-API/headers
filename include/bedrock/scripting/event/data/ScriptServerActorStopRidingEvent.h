#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorStopRidingEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorStopRidingEvent();
    void setExitFromRider(bool);
    void setEntityIsBeingDestroyed(bool);
    void getHash();
    ScriptServerActorStopRidingEvent();
    void setSwitchingRides(bool);
    void setActorId(ActorUniqueID const&);
    std::string getName();
};
