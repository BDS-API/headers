#pragma once

class ScriptServerBlockDestructionStoppedEvent : ScriptEventData {

public:
    static long ScriptServerBlockDestructionStoppedEvent::mHash;

    virtual ~ScriptServerBlockDestructionStoppedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerBlockDestructionStoppedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setProgress(float);
};
