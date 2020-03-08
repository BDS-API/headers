#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorMoveEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorMoveEvent::~ScriptServerActorMoveEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorMoveEvent(void);
    void setActorId(ActorUniqueID const&);
};
