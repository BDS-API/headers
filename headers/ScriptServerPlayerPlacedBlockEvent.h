#pragma once

class ScriptServerPlayerPlacedBlockEvent : ScriptEventData {

public:
    static long ScriptServerPlayerPlacedBlockEvent::mHash;

    virtual ~ScriptServerPlayerPlacedBlockEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerPlayerPlacedBlockEvent(void);
    void setActorId(ActorUniqueID const&);
    void setBlockPos(BlockPos const&);
};
