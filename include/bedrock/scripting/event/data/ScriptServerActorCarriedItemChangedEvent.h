#pragma once

#include "../../ScriptObjectHandle"
#include "../../../item/ItemInstance"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorCarriedItemChangedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorCarriedItemChangedEvent::~ScriptServerActorCarriedItemChangedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorCarriedItemChangedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItems(ItemInstance const&, ItemInstance const&);
    void setHand(HandSlot);
};
