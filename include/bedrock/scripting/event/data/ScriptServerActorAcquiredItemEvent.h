#pragma once

#include "../../../item/ItemInstance.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorAcquiredItemEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorAcquiredItemEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorAcquiredItemEvent();
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    void setAcquiredAmount(unsigned int);
//  void setAcquisitionMethod(ItemAcquisitionMethod); //TODO: incomplete function definition
    void setSecondaryActorId(ActorUniqueID const&);
    std::string getName();
};
