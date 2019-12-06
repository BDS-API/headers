#pragma once

class ActorCommandOrigin : CommandOrigin {

public:
    virtual ~ActorCommandOrigin();
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getOriginType(void)const;

    void ActorCommandOrigin(Actor &);
    void ActorCommandOrigin(ActorUniqueID, Level &);
};
