#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorStartRidingEvent : public ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorStartRidingEvent(); // _ZN33ScriptServerActorStartRidingEventD2Ev
    virtual void __fake_function0(); // fake
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK33ScriptServerActorStartRidingEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN33ScriptServerActorStartRidingEvent7getHashEv
    ScriptServerActorStartRidingEvent(); // _ZN33ScriptServerActorStartRidingEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN33ScriptServerActorStartRidingEvent10setActorIdERK13ActorUniqueID
    void setRideEntityId(ActorUniqueID const&); // _ZN33ScriptServerActorStartRidingEvent15setRideEntityIdERK13ActorUniqueID
    std::string getName(); // _ZN33ScriptServerActorStartRidingEvent7getNameB5cxx11Ev
};
