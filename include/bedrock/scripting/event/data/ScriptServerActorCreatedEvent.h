#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorCreatedEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorCreatedEvent::~ScriptServerActorCreatedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorCreatedEvent(void);
    void setActorId(ActorUniqueID const&);
};
