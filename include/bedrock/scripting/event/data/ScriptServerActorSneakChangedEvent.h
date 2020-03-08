#pragma once

#include "../../ScriptObjectHandle"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorSneakChangedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorSneakChangedEvent::~ScriptServerActorSneakChangedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorSneakChangedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setIsSneaking(bool);
};
