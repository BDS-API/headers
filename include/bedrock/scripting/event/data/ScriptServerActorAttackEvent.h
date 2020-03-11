#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorAttackEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorAttackEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorAttackEvent();
    void setActorId(ActorUniqueID const&);
    void setTargetId(ActorUniqueID const&);
    std::string getName();
};
