#pragma once

#include "../../../item/ItemInstance.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorEquippedArmorEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorEquippedArmorEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorEquippedArmorEvent();
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
//  void setSlot(ArmorSlot); //TODO: incomplete function definition
    std::string getName();
};
