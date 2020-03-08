#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"
#include "../../ScriptObjectHandle"


class ScriptServerActorTickEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorTickEvent::~ScriptServerActorTickEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorTickEvent(void);
    void setActorId(ActorUniqueID const&);
};
