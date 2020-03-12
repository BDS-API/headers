#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorDefinitionEventTriggeredEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorDefinitionEventTriggeredEvent();
    std::string getName();
    ScriptServerActorDefinitionEventTriggeredEvent();
    void getHash();
    void setActorId(ActorUniqueID const&);
    void setEventId(std::string const&);
};
