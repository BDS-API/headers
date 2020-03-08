#pragma once

#include "../../../../unmapped/ScriptEngine"
#include "../../../../unmapped/ActorUniqueID"
#include "../../../item/ItemInstance"


class ScriptServerActorUseItemEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorUseItemEvent::~ScriptServerActorUseItemEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerActorUseItemEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    void setUseMethod(ItemUseMethod);
};
