#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorCarriedItemChangedEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorCarriedItemChangedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void getHash();
    std::string getName();
    void setItems(ItemInstance const&, ItemInstance const&);
    ScriptServerActorCarriedItemChangedEvent();
//  void setHand(HandSlot); //TODO: incomplete function definition
    void setActorId(ActorUniqueID const&);
};
