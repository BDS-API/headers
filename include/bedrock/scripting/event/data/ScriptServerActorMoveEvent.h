#pragma once

#include "../../../../unmapped/ActorUniqueID"
#include "../../../../unmapped/ScriptEngine"


class ScriptServerActorMoveEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorMoveEvent::~ScriptServerActorMoveEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorMoveEvent(void);
    void setActorId(ActorUniqueID const&);
};
