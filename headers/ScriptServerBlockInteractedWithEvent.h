#pragma once

class ScriptServerBlockInteractedWithEvent : ScriptEventData {

public:
    static long ScriptServerBlockInteractedWithEvent::mHash;

    virtual ~ScriptServerBlockInteractedWithEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerBlockInteractedWithEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
