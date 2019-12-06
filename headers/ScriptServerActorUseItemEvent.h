#pragma once

class ScriptServerActorUseItemEvent : ScriptEventData {

public:
    static long ScriptServerActorUseItemEvent::mHash;

    virtual ~ScriptServerActorUseItemEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorUseItemEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    void setUseMethod(ItemUseMethod);
};
