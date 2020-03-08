#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../item/ItemInstance"


class ScriptServerActorDroppedItemEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorDroppedItemEvent::~ScriptServerActorDroppedItemEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorDroppedItemEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
};
