#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorCarriedItemChangedEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorCarriedItemChangedEvent(); // _ZN40ScriptServerActorCarriedItemChangedEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK40ScriptServerActorCarriedItemChangedEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN40ScriptServerActorCarriedItemChangedEvent7getHashEv
    ScriptServerActorCarriedItemChangedEvent(); // _ZN40ScriptServerActorCarriedItemChangedEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN40ScriptServerActorCarriedItemChangedEvent10setActorIdERK13ActorUniqueID
    void setItems(ItemInstance const&, ItemInstance const&); // _ZN40ScriptServerActorCarriedItemChangedEvent8setItemsERK12ItemInstanceS2_
//  void setHand(HandSlot); //TODO: incomplete function definition // _ZN40ScriptServerActorCarriedItemChangedEvent7setHandE8HandSlot
    std::string getName(); // _ZN40ScriptServerActorCarriedItemChangedEvent7getNameB5cxx11Ev
};
