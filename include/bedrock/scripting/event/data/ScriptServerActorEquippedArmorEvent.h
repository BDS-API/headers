#pragma once

#include "../../ScriptObjectHandle"
#include "../../../item/ItemInstance"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorEquippedArmorEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorEquippedArmorEvent::~ScriptServerActorEquippedArmorEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorEquippedArmorEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    void setSlot(ArmorSlot);
};
