#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorAcquiredItemEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorAcquiredItemEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    std::string getName();
    void setItemStack(ItemInstance const&);
    ScriptServerActorAcquiredItemEvent();
    void setAcquiredAmount(unsigned int);
    void setActorId(ActorUniqueID const&);
    void setSecondaryActorId(ActorUniqueID const&);
//  void setAcquisitionMethod(ItemAcquisitionMethod); //TODO: incomplete function definition
    void getHash();
};
