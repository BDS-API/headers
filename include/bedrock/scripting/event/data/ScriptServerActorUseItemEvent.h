#pragma once

#include "../../../item/ItemInstance.h"
#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerActorUseItemEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorUseItemEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorUseItemEvent();
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
//  void setUseMethod(ItemUseMethod); //TODO: incomplete function definition
    std::string getName();
};
