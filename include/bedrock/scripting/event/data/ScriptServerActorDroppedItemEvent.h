#pragma once

#include "../../ScriptObjectHandle"
#include "../../../item/ItemInstance"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorDroppedItemEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorDroppedItemEvent::~ScriptServerActorDroppedItemEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorDroppedItemEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
};
