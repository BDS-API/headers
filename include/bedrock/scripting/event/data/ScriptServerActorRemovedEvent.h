#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorRemovedEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorRemovedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ScriptServerActorRemovedEvent();
    void setActorId(ActorUniqueID const&);
    std::string getName();
    void getHash();
};
