#pragma once

#include "../../unmapped/ScriptEngine.h"
#include "./ScriptEventData.h"
#include "../../../util/Vec3.h"
#include "../../../actor/unmapped/ActorUniqueID.h"
#include "../../ScriptObjectHandle.h"
#include <string>


class ScriptServerProjectileHitEvent : ScriptEventData {

public:
    static long mHash;

    virtual ~ScriptServerProjectileHitEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;

    void getHash();
    ScriptServerProjectileHitEvent();
    void setProjectileId(ActorUniqueID const&);
    void setOwnerId(ActorUniqueID const&);
    void setHitId(ActorUniqueID const&);
    void setHitPosition(Vec3 const&);
    std::string getName();
};
