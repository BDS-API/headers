#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../item/ItemInstance"


class ScriptServerActorEquippedArmorEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorEquippedArmorEvent::~ScriptServerActorEquippedArmorEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorEquippedArmorEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    void setSlot(ArmorSlot);
};
