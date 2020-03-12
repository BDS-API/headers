#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorSneakChangedEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorSneakChangedEvent();
    void getHash();
    ScriptServerActorSneakChangedEvent();
    std::string getName();
    void setIsSneaking(bool);
    void setActorId(ActorUniqueID const&);
};
