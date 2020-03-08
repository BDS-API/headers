#pragma once

#include "../../unmapped/ScriptEngine"
#include "../../../actor/unmapped/ActorUniqueID"
#include "../../ScriptObjectHandle"
#include "../../../util/Vec3"


class ScriptServerProjectileHitEvent : ScriptEventData {

public:
    static long mHash;

    ScriptServerProjectileHitEvent::~ScriptServerProjectileHitEvent()
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerProjectileHitEvent(void);
    void setProjectileId(ActorUniqueID const&);
    void setOwnerId(ActorUniqueID const&);
    void setHitId(ActorUniqueID const&);
    void setHitPosition(Vec3 const&);
};
