#pragma once

#include "../../../../unmapped/ActorUniqueID"
#include "../../../../unmapped/ScriptEngine"


class ScriptServerActorRemovedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorRemovedEvent::~ScriptServerActorRemovedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorRemovedEvent(void);
    void setActorId(ActorUniqueID const&);
};
