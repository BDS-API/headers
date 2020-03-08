#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../item/ItemInstance"


class ScriptServerActorAcquiredItemEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorAcquiredItemEvent::~ScriptServerActorAcquiredItemEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorAcquiredItemEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    void setAcquiredAmount(unsigned int);
    void setAcquisitionMethod(ItemAcquisitionMethod);
    void setSecondaryActorId(ActorUniqueID const&);
};
