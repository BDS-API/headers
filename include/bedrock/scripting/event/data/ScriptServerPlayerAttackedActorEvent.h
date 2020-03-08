#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"
#include "../../ScriptObjectHandle"


class ScriptServerPlayerAttackedActorEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerPlayerAttackedActorEvent::~ScriptServerPlayerAttackedActorEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerPlayerAttackedActorEvent(void);
    void setPlayerId(ActorUniqueID const&);
    void setAttackedActorId(ActorUniqueID const&);
};
