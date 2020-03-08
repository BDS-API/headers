#pragma once

#include "../../ScriptObjectHandle"
#include "../../../util/Vec3"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../unmapped/ScriptEngine"


class ScriptServerProjectileHitEvent : ScriptEventData {

public:
    static long mHash;

    virtual ScriptServerProjectileHitEvent::~ScriptServerProjectileHitEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerProjectileHitEvent(void);
    void setProjectileId(ActorUniqueID const&);
    void setOwnerId(ActorUniqueID const&);
    void setHitId(ActorUniqueID const&);
    void setHitPosition(Vec3 const&);
};
