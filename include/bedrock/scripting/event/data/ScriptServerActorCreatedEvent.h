#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorCreatedEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorCreatedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ScriptServerActorCreatedEvent();
    std::string getName();
    void getHash();
    void setActorId(ActorUniqueID const&);
};
