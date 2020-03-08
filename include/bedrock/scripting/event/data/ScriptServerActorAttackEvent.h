#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorAttackEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorAttackEvent::~ScriptServerActorAttackEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorAttackEvent(void);
    void setActorId(ActorUniqueID const&);
    void setTargetId(ActorUniqueID const&);
};
