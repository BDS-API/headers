#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"
#include "../../ScriptObjectHandle"


class ScriptServerActorMoveEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorMoveEvent::~ScriptServerActorMoveEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorMoveEvent(void);
    void setActorId(ActorUniqueID const&);
};
