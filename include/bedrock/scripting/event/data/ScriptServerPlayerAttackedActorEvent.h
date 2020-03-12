#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerPlayerAttackedActorEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerPlayerAttackedActorEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    std::string getName();
    void getHash();
    void setAttackedActorId(ActorUniqueID const&);
    void setPlayerId(ActorUniqueID const&);
    ScriptServerPlayerAttackedActorEvent();
};
