#pragma once

class ActorServerCommandOrigin : ActorCommandOrigin {

public:
    virtual ActorServerCommandOrigin::~ActorServerCommandOrigin();
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual void getOriginType(void)const;

    ActorServerCommandOrigin(Actor &);
    ActorServerCommandOrigin(ActorUniqueID, Level &);
};
