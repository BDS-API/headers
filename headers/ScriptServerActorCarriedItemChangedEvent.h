#pragma once

class ScriptServerActorCarriedItemChangedEvent : ScriptEventData {

public:
    static long ScriptServerActorCarriedItemChangedEvent::mHash;

    virtual ~ScriptServerActorCarriedItemChangedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorCarriedItemChangedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItems(ItemInstance const&, ItemInstance const&);
    void setHand(HandSlot);
};
