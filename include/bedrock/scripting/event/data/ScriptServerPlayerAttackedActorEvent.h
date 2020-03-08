#pragma once

#include "../../../../unmapped/ActorUniqueID"
#include "../../../../unmapped/ScriptEngine"


class ScriptServerPlayerAttackedActorEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerPlayerAttackedActorEvent::~ScriptServerPlayerAttackedActorEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerPlayerAttackedActorEvent(void);
    void setPlayerId(ActorUniqueID const&);
    void setAttackedActorId(ActorUniqueID const&);
};
