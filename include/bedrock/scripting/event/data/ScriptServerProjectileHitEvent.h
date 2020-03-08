#pragma once

#include "../../../../unmapped/ActorUniqueID"
#include "../../../../unmapped/Vec3"
#include "../../../../unmapped/ScriptEngine"


class ScriptServerProjectileHitEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerProjectileHitEvent::~ScriptServerProjectileHitEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash(void);
    ScriptServerProjectileHitEvent(void);
    void setProjectileId(ActorUniqueID const&);
    void setOwnerId(ActorUniqueID const&);
    void setHitId(ActorUniqueID const&);
    void setHitPosition(Vec3 const&);
};
