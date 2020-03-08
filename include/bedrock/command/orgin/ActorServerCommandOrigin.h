#pragma once

#include "../../actor/unmapped/ActorUniqueID"
#include "../../level/Level"
#include "../../actor/Actor"


class ActorServerCommandOrigin : ActorCommandOrigin {

public:
    ActorServerCommandOrigin::~ActorServerCommandOrigin()
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual void getOriginType()const;

    ActorServerCommandOrigin(Actor &);
    ActorServerCommandOrigin(ActorUniqueID, Level &);
};
