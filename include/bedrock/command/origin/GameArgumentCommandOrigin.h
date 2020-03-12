#pragma once

#include "CommandOrigin.h"


class GameArgumentCommandOrigin : CommandOrigin {

public:
    virtual void clone()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getOriginType()const;
    virtual std::string getName()const;
    ~GameArgumentCommandOrigin();
    virtual std::string getRequestId()const;
    virtual void getLevel()const;
    virtual void getDimension()const;
    virtual void getPermissionsLevel()const;
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getEntity()const;
    GameArgumentCommandOrigin();
};
