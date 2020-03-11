#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorTickEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorTickEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorTickEvent();
    void setActorId(ActorUniqueID const&);
    std::string getName();
};
