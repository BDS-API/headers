#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorTickEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorTickEvent::~ScriptServerActorTickEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorTickEvent(void);
    void setActorId(ActorUniqueID const&);
};
