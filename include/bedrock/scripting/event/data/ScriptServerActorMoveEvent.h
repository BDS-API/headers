#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorMoveEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorMoveEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorMoveEvent();
    void setActorId(ActorUniqueID const&);
    std::string getName();
};
