#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorMoveEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorMoveEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ScriptServerActorMoveEvent();
    std::string getName();
    void getHash();
    void setActorId(ActorUniqueID const&);
};
