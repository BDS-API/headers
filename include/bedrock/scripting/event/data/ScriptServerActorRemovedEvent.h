#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorRemovedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorRemovedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorRemovedEvent();
    void setActorId(ActorUniqueID const&);
    std::string getName();
};
