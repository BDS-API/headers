#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorDroppedItemEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorDroppedItemEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void setItemStack(ItemInstance const&);
    void setActorId(ActorUniqueID const&);
    std::string getName();
    ScriptServerActorDroppedItemEvent();
    void getHash();
};
