#pragma once

class ScriptServerActorEquippedArmorEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorEquippedArmorEvent::~ScriptServerActorEquippedArmorEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorEquippedArmorEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    void setSlot(ArmorSlot);
};
