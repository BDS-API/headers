#pragma once

#include "../../ScriptObjectHandle"
#include "../../../item/ItemInstance"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerActorUseItemEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerActorUseItemEvent::~ScriptServerActorUseItemEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerActorUseItemEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    void setUseMethod(ItemUseMethod);
};
