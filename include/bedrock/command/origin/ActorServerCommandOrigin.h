#pragma once

#include "ActorCommandOrigin.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class ActorServerCommandOrigin : public ActorCommandOrigin {

public:
    virtual ~ActorServerCommandOrigin(); // _ZN24ActorServerCommandOriginD2Ev
    virtual void __fake_function0(); // fake
    virtual void getPermissionsLevel()const; // _ZNK24ActorServerCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK24ActorServerCommandOrigin5cloneEv
    virtual void getOriginType()const; // _ZNK24ActorServerCommandOrigin13getOriginTypeEv
    ActorServerCommandOrigin(Actor &); // _ZN24ActorServerCommandOriginC2ER5Actor
    ActorServerCommandOrigin(ActorUniqueID, Level &); // _ZN24ActorServerCommandOriginC2E13ActorUniqueIDR5Level
};
