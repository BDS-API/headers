#pragma once

#include <string>
#include "CommandOrigin.h"


class PrecompiledCommandOrigin : CommandOrigin {

public:
    virtual void getLevel()const;
    ~PrecompiledCommandOrigin();
    virtual bool hasTellPerms()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual bool hasChatPerms()const;
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition
    virtual std::string getRequestId()const;
    virtual void getDimension()const;
    virtual void getEntity()const;
    virtual void getBlockPosition()const;
    virtual bool isWorldBuilder()const;
    virtual std::string getName()const;
    virtual void getOriginType()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void clone()const;
    virtual void getPermissionsLevel()const;
    virtual void getWorldPosition()const;
    PrecompiledCommandOrigin();
};
