#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorRemovedEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorRemovedEvent::~ScriptServerActorRemovedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorRemovedEvent(void);
    void setActorId(ActorUniqueID const&);
};
