#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"


class ScriptServerActorMoveEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorMoveEvent();
    ScriptServerActorMoveEvent();
    void getHash();
    void setActorId(ActorUniqueID const&);
    std::string getName();
};
