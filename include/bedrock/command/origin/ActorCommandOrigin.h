#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "CommandOrigin.h"
#include "../../actor/Actor.h"
#include "../../level/Level.h"


class ActorCommandOrigin : CommandOrigin {

public:
    virtual void getPermissionsLevel()const;
    virtual std::string getRequestId()const;
    virtual void clone()const;
    virtual void getWorldPosition()const;
    ~ActorCommandOrigin();
    virtual void getBlockPosition()const;
    virtual void getLevel()const;
    virtual void getDimension()const;
    virtual std::string getName()const;
    virtual void getEntity()const;
    virtual void getOriginType()const;
    virtual bool isSelectorExpansionAllowed()const;
    ActorCommandOrigin(ActorUniqueID, Level &);
    ActorCommandOrigin(Actor &);
};
