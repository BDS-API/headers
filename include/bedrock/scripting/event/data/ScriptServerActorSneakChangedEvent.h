#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"


class ScriptServerActorSneakChangedEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorSneakChangedEvent();
    void setActorId(ActorUniqueID const&);
    ScriptServerActorSneakChangedEvent();
    void setIsSneaking(bool);
    void getHash();
    std::string getName();
};
