#pragma once

#include "../../../item/ItemInstance.h"
#include "../../unmapped/ScriptEngine.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerActorCarriedItemChangedEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorCarriedItemChangedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
//  void setHand(HandSlot); //TODO: incomplete function definition
    ScriptServerActorCarriedItemChangedEvent();
    void getHash();
    void setActorId(ActorUniqueID const&);
    void setItems(ItemInstance const&, ItemInstance const&);
    std::string getName();
};
