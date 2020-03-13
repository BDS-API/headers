#pragma once

#include <string>
#include "ScriptEventData.h"


class ScriptServerProjectileHitEvent : ScriptEventData {

public:
    static long mHash;

    ~ScriptServerProjectileHitEvent(); // _ZN30ScriptServerProjectileHitEventD2Ev
    virtual void _serialize(ScriptEngine &, ScriptApi::ScriptObjectHandle &)const; // _ZNK30ScriptServerProjectileHitEvent10_serializeER12ScriptEngineRN9ScriptApi18ScriptObjectHandleE
    void getHash(); // _ZN30ScriptServerProjectileHitEvent7getHashEv
    ScriptServerProjectileHitEvent(); // _ZN30ScriptServerProjectileHitEventC2Ev
    void setProjectileId(ActorUniqueID const&); // _ZN30ScriptServerProjectileHitEvent15setProjectileIdERK13ActorUniqueID
    void setOwnerId(ActorUniqueID const&); // _ZN30ScriptServerProjectileHitEvent10setOwnerIdERK13ActorUniqueID
    void setHitId(ActorUniqueID const&); // _ZN30ScriptServerProjectileHitEvent8setHitIdERK13ActorUniqueID
    void setHitPosition(Vec3 const&); // _ZN30ScriptServerProjectileHitEvent14setHitPositionERK4Vec3
    std::string getName(); // _ZN30ScriptServerProjectileHitEvent7getNameB5cxx11Ev
};
