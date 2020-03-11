#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "./ActorCommandOrigin.h"
#include "../../level/Level.h"
#include "../../actor/Actor.h"


class ActorServerCommandOrigin : ActorCommandOrigin {

public:
    virtual ~ActorServerCommandOrigin();
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual void getOriginType()const;

    ActorServerCommandOrigin(Actor &);
    ActorServerCommandOrigin(ActorUniqueID, Level &);
};
