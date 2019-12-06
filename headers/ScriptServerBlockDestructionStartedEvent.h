#pragma once

class ScriptServerBlockDestructionStartedEvent : ScriptEventData {

public:
    static long ScriptServerBlockDestructionStartedEvent::mHash;

    virtual ~ScriptServerBlockDestructionStartedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerBlockDestructionStartedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
