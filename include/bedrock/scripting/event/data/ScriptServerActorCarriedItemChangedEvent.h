#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../item/ItemInstance"


class ScriptServerActorCarriedItemChangedEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorCarriedItemChangedEvent::~ScriptServerActorCarriedItemChangedEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorCarriedItemChangedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItems(ItemInstance const&, ItemInstance const&);
    void setHand(HandSlot);
};
