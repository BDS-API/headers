#pragma once

#include "../../ScriptObjectHandle"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorDefinitionEventTriggeredEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorDefinitionEventTriggeredEvent::~ScriptServerActorDefinitionEventTriggeredEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorDefinitionEventTriggeredEvent(void);
    void setActorId(ActorUniqueID const&);
    void setEventId(std::string const&);
};
