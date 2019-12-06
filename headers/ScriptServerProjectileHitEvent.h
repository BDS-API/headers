#pragma once

class ScriptServerProjectileHitEvent : ScriptEventData {

public:
    static long ScriptServerProjectileHitEvent::mHash;

    virtual ~ScriptServerProjectileHitEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    void ScriptServerProjectileHitEvent(void);
    void setProjectileId(ActorUniqueID const&);
    void setOwnerId(ActorUniqueID const&);
    void setHitId(ActorUniqueID const&);
    void setHitPosition(Vec3 const&);
};
