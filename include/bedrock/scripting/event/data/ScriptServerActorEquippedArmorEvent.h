#pragma once

#include "../../../item/ItemInstance.h"
#include "../../unmapped/ScriptEngine.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerActorEquippedArmorEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorEquippedArmorEvent();
    void getHash();
    ScriptServerActorEquippedArmorEvent();
    void setActorId(ActorUniqueID const&);
//  void setSlot(ArmorSlot); //TODO: incomplete function definition
    std::string getName();
    void setItemStack(ItemInstance const&);
};
