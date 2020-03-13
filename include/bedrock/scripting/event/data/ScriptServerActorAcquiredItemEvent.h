#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorAcquiredItemEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorAcquiredItemEvent(); // _ZN34ScriptServerActorAcquiredItemEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK34ScriptServerActorAcquiredItemEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN34ScriptServerActorAcquiredItemEvent7getHashEv
    ScriptServerActorAcquiredItemEvent(); // _ZN34ScriptServerActorAcquiredItemEventC2Ev
    void setActorId(ActorUniqueID const&); // _ZN34ScriptServerActorAcquiredItemEvent10setActorIdERK13ActorUniqueID
    void setItemStack(ItemInstance const&); // _ZN34ScriptServerActorAcquiredItemEvent12setItemStackERK12ItemInstance
    void setAcquiredAmount(unsigned int); // _ZN34ScriptServerActorAcquiredItemEvent17setAcquiredAmountEj
//  void setAcquisitionMethod(ItemAcquisitionMethod); //TODO: incomplete function definition // _ZN34ScriptServerActorAcquiredItemEvent20setAcquisitionMethodE21ItemAcquisitionMethod
    void setSecondaryActorId(ActorUniqueID const&); // _ZN34ScriptServerActorAcquiredItemEvent19setSecondaryActorIdERK13ActorUniqueID
    std::string getName(); // _ZN34ScriptServerActorAcquiredItemEvent7getNameB5cxx11Ev
};
