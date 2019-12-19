#pragma once

class ScriptServerBlockInteractedWithEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerBlockInteractedWithEvent::~ScriptServerBlockInteractedWithEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerBlockInteractedWithEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
