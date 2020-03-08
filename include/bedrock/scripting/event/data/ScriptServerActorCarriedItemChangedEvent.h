#pragma once

#include "../../../../unmapped/ScriptEngine"
#include "../../../../unmapped/ActorUniqueID"
#include "../../../item/ItemInstance"


class ScriptServerActorCarriedItemChangedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorCarriedItemChangedEvent::~ScriptServerActorCarriedItemChangedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorCarriedItemChangedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItems(ItemInstance const&, ItemInstance const&);
    void setHand(HandSlot);
};
