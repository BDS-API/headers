#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "ActorCommandOrigin.h"
#include "../../actor/Actor.h"
#include "../../level/Level.h"


class ActorServerCommandOrigin : ActorCommandOrigin {

public:
    virtual void getOriginType()const;
    virtual void getPermissionsLevel()const;
    ~ActorServerCommandOrigin();
    virtual void clone()const;
    ActorServerCommandOrigin(ActorUniqueID, Level &);
    ActorServerCommandOrigin(Actor &);
};
