#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerPlayerAttackedActorEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerPlayerAttackedActorEvent(); // _ZN36ScriptServerPlayerAttackedActorEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK36ScriptServerPlayerAttackedActorEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN36ScriptServerPlayerAttackedActorEvent7getHashEv
    ScriptServerPlayerAttackedActorEvent(); // _ZN36ScriptServerPlayerAttackedActorEventC2Ev
    void setPlayerId(ActorUniqueID const&); // _ZN36ScriptServerPlayerAttackedActorEvent11setPlayerIdERK13ActorUniqueID
    void setAttackedActorId(ActorUniqueID const&); // _ZN36ScriptServerPlayerAttackedActorEvent18setAttackedActorIdERK13ActorUniqueID
    std::string getName(); // _ZN36ScriptServerPlayerAttackedActorEvent7getNameB5cxx11Ev
};
