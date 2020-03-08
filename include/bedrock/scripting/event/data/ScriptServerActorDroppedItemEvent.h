#pragma once

#include "../../../../unmapped/ActorUniqueID"
#include "../../../item/ItemInstance"
#include "../../../../unmapped/ScriptEngine"


class ScriptServerActorDroppedItemEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorDroppedItemEvent::~ScriptServerActorDroppedItemEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorDroppedItemEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
};
