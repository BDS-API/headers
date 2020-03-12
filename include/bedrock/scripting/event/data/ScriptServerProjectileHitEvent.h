#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerProjectileHitEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerProjectileHitEvent();
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const;
    std::string getName();
    void setHitId(ActorUniqueID const&);
    ScriptServerProjectileHitEvent();
    void setProjectileId(ActorUniqueID const&);
    void setOwnerId(ActorUniqueID const&);
    void setHitPosition(Vec3 const&);
    void getHash();
};
