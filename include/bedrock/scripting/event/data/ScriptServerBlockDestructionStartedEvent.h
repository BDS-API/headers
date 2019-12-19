#pragma once

class ScriptServerBlockDestructionStartedEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerBlockDestructionStartedEvent::~ScriptServerBlockDestructionStartedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerBlockDestructionStartedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
