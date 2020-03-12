#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "CommandOrigin.h"


class ActorCommandOrigin : CommandOrigin {

public:
    virtual void getDimension()const;
    virtual std::string getName()const;
    virtual void getPermissionsLevel()const;
    ~ActorCommandOrigin();
    virtual void clone()const;
    virtual void getBlockPosition()const;
    virtual void getLevel()const;
    virtual void getEntity()const;
    virtual void getWorldPosition()const;
    virtual std::string getRequestId()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;
    ActorCommandOrigin(Actor &);
    ActorCommandOrigin(ActorUniqueID, Level &);
};
