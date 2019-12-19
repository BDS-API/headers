#pragma once

class ActorCommandOrigin : CommandOrigin {

public:
    virtual ActorCommandOrigin::~ActorCommandOrigin();
    virtual void getRequestId[abi:cxx11](void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getOriginType(void)const;

    ActorCommandOrigin(Actor &);
    ActorCommandOrigin(ActorUniqueID, Level &);
};
