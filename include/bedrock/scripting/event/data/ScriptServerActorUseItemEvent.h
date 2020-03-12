#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerActorUseItemEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerActorUseItemEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    void setItemStack(ItemInstance const&);
    ScriptServerActorUseItemEvent();
    std::string getName();
    void setActorId(ActorUniqueID const&);
    void getHash();
//  void setUseMethod(ItemUseMethod); //TODO: incomplete function definition
};
