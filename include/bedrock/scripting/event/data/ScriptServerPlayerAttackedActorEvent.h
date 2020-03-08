#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../unmapped/ScriptEngine"


class ScriptServerPlayerAttackedActorEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerPlayerAttackedActorEvent::~ScriptServerPlayerAttackedActorEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerPlayerAttackedActorEvent(void);
    void setPlayerId(ActorUniqueID const&);
    void setAttackedActorId(ActorUniqueID const&);
};
