#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../item/ItemInstance"


class ScriptServerActorUseItemEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerActorUseItemEvent::~ScriptServerActorUseItemEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorUseItemEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    void setUseMethod(ItemUseMethod);
};
