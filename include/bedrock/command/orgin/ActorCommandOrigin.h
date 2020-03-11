#pragma once

#include "../../actor/Actor.h"
#include "../../level/Level.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "./CommandOrigin.h"
#include <string>


class ActorCommandOrigin : CommandOrigin {

public:
    virtual ~ActorCommandOrigin();
    virtual std::string getRequestId()const;
    virtual std::string getName()const;
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
