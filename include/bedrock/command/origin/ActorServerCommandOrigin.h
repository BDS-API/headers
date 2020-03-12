#pragma once

#include "ActorCommandOrigin.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class ActorServerCommandOrigin : ActorCommandOrigin {

public:
    ~ActorServerCommandOrigin();
    virtual void getOriginType()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    ActorServerCommandOrigin(Actor &);
    ActorServerCommandOrigin(ActorUniqueID, Level &);
};
