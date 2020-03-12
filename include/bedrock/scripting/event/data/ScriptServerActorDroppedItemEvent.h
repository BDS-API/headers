#pragma once

#include "../../../item/ItemInstance.h"
#include "../../unmapped/ScriptEngine.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerActorDroppedItemEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorDroppedItemEvent();
    ScriptServerActorDroppedItemEvent();
    void setActorId(ActorUniqueID const&);
    std::string getName();
    void setItemStack(ItemInstance const&);
    void getHash();
};
