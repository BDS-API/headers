#pragma once

#include <string>
#include "CommandOrigin.h"


class GameArgumentCommandOrigin : CommandOrigin {

public:
    virtual void clone()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getDimension()const;
    virtual std::string getName()const;
    virtual void getLevel()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;
    ~GameArgumentCommandOrigin();
    virtual void getBlockPosition()const;
    virtual void getPermissionsLevel()const;
    virtual std::string getRequestId()const;
    virtual void getEntity()const;
    virtual void getWorldPosition()const;
    GameArgumentCommandOrigin();
};
