#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorTickEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorTickEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    std::string getName();
    void setActorId(ActorUniqueID const&);
    void getHash();
    ScriptServerActorTickEvent();
};
