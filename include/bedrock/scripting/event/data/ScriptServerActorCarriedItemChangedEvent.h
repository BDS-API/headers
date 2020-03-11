#pragma once

#include "../../../item/ItemInstance.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorCarriedItemChangedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorCarriedItemChangedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorCarriedItemChangedEvent();
    void setActorId(ActorUniqueID const&);
    void setItems(ItemInstance const&, ItemInstance const&);
//  void setHand(HandSlot); //TODO: incomplete function definition
    std::string getName();
};
