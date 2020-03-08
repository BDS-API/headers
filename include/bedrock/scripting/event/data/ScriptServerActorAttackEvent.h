#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"
#include "../../ScriptObjectHandle"


class ScriptServerActorAttackEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorAttackEvent::~ScriptServerActorAttackEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorAttackEvent(void);
    void setActorId(ActorUniqueID const&);
    void setTargetId(ActorUniqueID const&);
};
