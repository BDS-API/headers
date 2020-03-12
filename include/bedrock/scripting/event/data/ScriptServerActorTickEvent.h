#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"


class ScriptServerActorTickEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorTickEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ScriptServerActorTickEvent();
    std::string getName();
    void setActorId(ActorUniqueID const&);
    void getHash();
};
