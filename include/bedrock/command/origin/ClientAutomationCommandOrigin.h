#pragma once

#include <string>
#include "CommandOrigin.h"


class ClientAutomationCommandOrigin : CommandOrigin {

public:
    virtual void getEntity()const;
    virtual void getBlockPosition()const;
    virtual std::string getName()const;
    virtual void clone()const;
    virtual std::string getRequestId()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual bool isSelectorExpansionAllowed()const;
    ~ClientAutomationCommandOrigin();
    virtual void getWorldPosition()const;
    virtual void getLevel()const;
    virtual void getOriginType()const;
    virtual void getDimension()const;
    virtual void getPermissionsLevel()const;
    virtual void toCommandOriginData()const;
    ClientAutomationCommandOrigin(std::string const&);
};
