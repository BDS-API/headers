#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorRemovedEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorRemovedEvent(); // _ZN29ScriptServerActorRemovedEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK29ScriptServerActorRemovedEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN29ScriptServerActorRemovedEvent7getHashEv
    ScriptServerActorRemovedEvent(); // _ZN29ScriptServerActorRemovedEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN29ScriptServerActorRemovedEvent10setActorIdERK13ActorUniqueID
    std::string getName(); // _ZN29ScriptServerActorRemovedEvent7getNameB5cxx11Ev
};
