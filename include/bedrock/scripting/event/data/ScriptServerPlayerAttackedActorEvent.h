#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerPlayerAttackedActorEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerPlayerAttackedActorEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerPlayerAttackedActorEvent();
    void setPlayerId(ActorUniqueID const&);
    void setAttackedActorId(ActorUniqueID const&);
    std::string getName();
};
