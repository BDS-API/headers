#pragma once

#include "../../../util/Vec3.h"
#include "../../unmapped/ScriptEngine.h"
#include "../../ScriptObjectHandle.h"
#include "ScriptEventData.h"
#include "../../../actor/unmapped/ActorUniqueID.h"


class ScriptServerProjectileHitEvent : ScriptEventData {

public:
    static long mHash;

    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    ~ScriptServerProjectileHitEvent();
    void setOwnerId(ActorUniqueID const&);
    void setProjectileId(ActorUniqueID const&);
    void setHitPosition(Vec3 const&);
    std::string getName();
    void getHash();
    ScriptServerProjectileHitEvent();
    void setHitId(ActorUniqueID const&);
};
