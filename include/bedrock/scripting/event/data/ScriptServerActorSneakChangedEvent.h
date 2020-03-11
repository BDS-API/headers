#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorSneakChangedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorSneakChangedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorSneakChangedEvent();
    void setActorId(ActorUniqueID const&);
    void setIsSneaking(bool);
    std::string getName();
};
