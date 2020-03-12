#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"


class ScriptServerPlayerAttackedActorEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerPlayerAttackedActorEvent();
    ScriptServerPlayerAttackedActorEvent();
    void setAttackedActorId(ActorUniqueID const&);
    void getHash();
    void setPlayerId(ActorUniqueID const&);
    std::string getName();
};
