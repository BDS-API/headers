#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"
#include "../../ScriptObjectHandle"


class ScriptServerActorCreatedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorCreatedEvent::~ScriptServerActorCreatedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorCreatedEvent(void);
    void setActorId(ActorUniqueID const&);
};
