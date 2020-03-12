#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorAttackEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorAttackEvent();
    void setTargetId(ActorUniqueID const&);
    std::string getName();
    void setActorId(ActorUniqueID const&);
    ScriptServerActorAttackEvent();
    void getHash();
};
