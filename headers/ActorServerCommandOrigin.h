#pragma once

class ActorServerCommandOrigin : ActorCommandOrigin {

public:
    virtual ~ActorServerCommandOrigin();
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual void getOriginType(void)const;

    void ActorServerCommandOrigin(Actor &);
    void ActorServerCommandOrigin(ActorUniqueID, Level &);
};
