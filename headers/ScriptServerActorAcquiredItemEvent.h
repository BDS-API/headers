#pragma once

class ScriptServerActorAcquiredItemEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerActorAcquiredItemEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerActorAcquiredItemEvent(void);
    void setActorId(ActorUniqueID const&);
    void setItemStack(ItemInstance const&);
    void setAcquiredAmount(unsigned int);
    void setAcquisitionMethod(ItemAcquisitionMethod);
    void setSecondaryActorId(ActorUniqueID const&);
};
