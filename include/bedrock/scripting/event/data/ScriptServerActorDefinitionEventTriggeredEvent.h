#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"


class ScriptServerActorDefinitionEventTriggeredEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorDefinitionEventTriggeredEvent::~ScriptServerActorDefinitionEventTriggeredEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorDefinitionEventTriggeredEvent(void);
    void setActorId(ActorUniqueID const&);
    void setEventId(std::string const&);
};
