#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorEquippedArmorEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorEquippedArmorEvent(); // _ZN35ScriptServerActorEquippedArmorEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK35ScriptServerActorEquippedArmorEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN35ScriptServerActorEquippedArmorEvent7getHashEv
    ScriptServerActorEquippedArmorEvent(); // _ZN35ScriptServerActorEquippedArmorEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN35ScriptServerActorEquippedArmorEvent10setActorIdERK13ActorUniqueID
    void setItemStack(ItemInstance const&); // _ZN35ScriptServerActorEquippedArmorEvent12setItemStackERK12ItemInstance
//  void setSlot(ArmorSlot); //TODO: incomplete function definition // _ZN35ScriptServerActorEquippedArmorEvent7setSlotE9ArmorSlot
    std::string getName(); // _ZN35ScriptServerActorEquippedArmorEvent7getNameB5cxx11Ev
};
