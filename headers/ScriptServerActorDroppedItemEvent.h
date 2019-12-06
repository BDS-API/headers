#pragma once

class ScriptServerActorDroppedItemEvent : ScriptEventData {

public:
    static long ScriptServerActorDroppedItemEvent::mHash;

    virtual ~ScriptServerActorDroppedItemEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorDroppedItemEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
};
