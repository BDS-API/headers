#pragma once

#include "CommandOrigin.h"
#include <string>


class ClientAutomationCommandOrigin : CommandOrigin {

public:
    virtual void getBlockPosition()const;
    virtual void getPermissionsLevel()const;
    virtual void toCommandOriginData()const;
    virtual void getWorldPosition()const;
    virtual void getLevel()const;
    virtual void getDimension()const;
    virtual void getEntity()const;
    virtual std::string getRequestId()const;
    virtual void clone()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;
    ~ClientAutomationCommandOrigin();
    virtual std::string getName()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    ClientAutomationCommandOrigin(std::string const&);
};
