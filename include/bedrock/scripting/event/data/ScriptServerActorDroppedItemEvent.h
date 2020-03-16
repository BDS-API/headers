#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorDroppedItemEvent : public ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorDroppedItemEvent(); // _ZN33ScriptServerActorDroppedItemEventD2Ev
    virtual void __fake_function0(); // fake
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK33ScriptServerActorDroppedItemEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN33ScriptServerActorDroppedItemEvent7getHashEv
    ScriptServerActorDroppedItemEvent(); // _ZN33ScriptServerActorDroppedItemEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN33ScriptServerActorDroppedItemEvent10setActorIdERK13ActorUniqueID
    void setItemStack(ItemInstance const&); // _ZN33ScriptServerActorDroppedItemEvent12setItemStackERK12ItemInstance
    std::string getName(); // _ZN33ScriptServerActorDroppedItemEvent7getNameB5cxx11Ev
};
