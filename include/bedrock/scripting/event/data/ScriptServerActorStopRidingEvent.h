#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorStopRidingEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorStopRidingEvent(); // _ZN32ScriptServerActorStopRidingEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK32ScriptServerActorStopRidingEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN32ScriptServerActorStopRidingEvent7getHashEv
    ScriptServerActorStopRidingEvent(); // _ZN32ScriptServerActorStopRidingEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN32ScriptServerActorStopRidingEvent10setActorIdERK13ActorUniqueID
    void setExitFromRider(bool); // _ZN32ScriptServerActorStopRidingEvent16setExitFromRiderEb
    void setEntityIsBeingDestroyed(bool); // _ZN32ScriptServerActorStopRidingEvent25setEntityIsBeingDestroyedEb
    void setSwitchingRides(bool); // _ZN32ScriptServerActorStopRidingEvent17setSwitchingRidesEb
    std::string getName(); // _ZN32ScriptServerActorStopRidingEvent7getNameB5cxx11Ev
};
