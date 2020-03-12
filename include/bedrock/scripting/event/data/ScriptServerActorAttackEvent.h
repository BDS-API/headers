#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"


class ScriptServerActorAttackEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorAttackEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    std::string getName();
    ScriptServerActorAttackEvent();
    void getHash();
    void setActorId(ActorUniqueID const&);
    void setTargetId(ActorUniqueID const&);
};
