#pragma once

#include "../../../item/ItemInstance.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorDroppedItemEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorDroppedItemEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorDroppedItemEvent();
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    std::string getName();
};
