#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorStartRidingEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorStartRidingEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void getHash();
    void setRideEntityId(ActorUniqueID const&);
    ScriptServerActorStartRidingEvent();
    std::string getName();
    void setActorId(ActorUniqueID const&);
};
