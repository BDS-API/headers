#pragma once

#include "../../level/Level"
#include "../../actor/unmapped/ActorUniqueID"
#include "../../actor/Actor"


class ActorCommandOrigin : CommandOrigin {

public:
    ActorCommandOrigin::~ActorCommandOrigin()
    virtual void getRequestId()const;
    virtual void getName()const;
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
    virtual void getLevel()const;
    virtual void getDimension()const;
    virtual void getEntity()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;

    ActorCommandOrigin(Actor &);
    ActorCommandOrigin(ActorUniqueID, Level &);
};
