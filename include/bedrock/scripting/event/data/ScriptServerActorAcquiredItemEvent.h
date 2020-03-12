#pragma once

#include "../../../item/ItemInstance.h"
#include "../../unmapped/ScriptEngine.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerActorAcquiredItemEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorAcquiredItemEvent();
    std::string getName();
    void setAcquiredAmount(unsigned int);
    void setActorId(ActorUniqueID const&);
//  void setAcquisitionMethod(ItemAcquisitionMethod); //TODO: incomplete function definition
    void getHash();
    ScriptServerActorAcquiredItemEvent();
    void setItemStack(ItemInstance const&);
    void setSecondaryActorId(ActorUniqueID const&);
};
