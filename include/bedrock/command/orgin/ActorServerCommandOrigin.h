#pragma once

#include "../../actor/unmapped/ActorUniqueID"
#include "../../actor/Actor"
#include "../../level/Level"


class ActorServerCommandOrigin : ActorCommandOrigin {

public:
    virtual ActorServerCommandOrigin::~ActorServerCommandOrigin()
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual void getOriginType()const;

    ActorServerCommandOrigin(Actor &);
    ActorServerCommandOrigin(ActorUniqueID, Level &);
};
