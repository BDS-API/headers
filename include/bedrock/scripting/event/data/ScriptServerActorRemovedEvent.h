#pragma once

#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"
#include "../../ScriptObjectHandle"


class ScriptServerActorRemovedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorRemovedEvent::~ScriptServerActorRemovedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorRemovedEvent(void);
    void setActorId(ActorUniqueID const&);
};
