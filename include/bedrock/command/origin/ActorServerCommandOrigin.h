#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "ActorCommandOrigin.h"


class ActorServerCommandOrigin : ActorCommandOrigin {

public:
    ~ActorServerCommandOrigin(); // _ZN24ActorServerCommandOriginD2Ev
    virtual void getPermissionsLevel()const; // _ZNK24ActorServerCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK24ActorServerCommandOrigin5cloneEv
    virtual void getOriginType()const; // _ZNK24ActorServerCommandOrigin13getOriginTypeEv
    ActorServerCommandOrigin(Actor &); // _ZN24ActorServerCommandOriginC2ER5Actor
    ActorServerCommandOrigin(ActorUniqueID, Level &); // _ZN24ActorServerCommandOriginC2E13ActorUniqueIDR5Level
};
