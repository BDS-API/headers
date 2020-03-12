#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorEquippedArmorEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorEquippedArmorEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void setActorId(ActorUniqueID const&);
//  void setSlot(ArmorSlot); //TODO: incomplete function definition
    std::string getName();
    ScriptServerActorEquippedArmorEvent();
    void getHash();
    void setItemStack(ItemInstance const&);
};
