#pragma once

#include "../../ScriptObjectHandle"
#include "../../../item/ItemInstance"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorAcquiredItemEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorAcquiredItemEvent::~ScriptServerActorAcquiredItemEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorAcquiredItemEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    void setAcquiredAmount(unsigned int);
    void setAcquisitionMethod(ItemAcquisitionMethod);
    void setSecondaryActorId(ActorUniqueID const&);
};
