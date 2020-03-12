#pragma once

#include "../../../item/ItemInstance.h"
#include "../../unmapped/ScriptEngine.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerActorUseItemEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerActorUseItemEvent();
    void setItemStack(ItemInstance const&);
    std::string getName();
    void getHash();
//  void setUseMethod(ItemUseMethod); //TODO: incomplete function definition
    ScriptServerActorUseItemEvent();
    void setActorId(ActorUniqueID const&);
};
