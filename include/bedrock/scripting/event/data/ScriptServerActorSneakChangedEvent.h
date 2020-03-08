#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"


class ScriptServerActorSneakChangedEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorSneakChangedEvent::~ScriptServerActorSneakChangedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorSneakChangedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setIsSneaking(bool);
};
