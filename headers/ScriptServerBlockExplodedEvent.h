#pragma once

class ScriptServerBlockExplodedEvent : ScriptEventData {

public:
    static long ScriptServerBlockExplodedEvent::mHash;

    virtual ~ScriptServerBlockExplodedEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerBlockExplodedEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
    void setCause(std::string const&);
    void setBlockIdentifier(std::string const&);
};
