#pragma once

#include "CommandOrigin.h"


class PrecompiledCommandOrigin : CommandOrigin {

public:
    virtual std::string getName()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual bool hasTellPerms()const;
    virtual void getOriginType()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getBlockPosition()const;
    virtual void getEntity()const;
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition
    ~PrecompiledCommandOrigin();
    virtual void getLevel()const;
    virtual bool hasChatPerms()const;
    virtual void getPermissionsLevel()const;
    virtual void getWorldPosition()const;
    virtual void clone()const;
    virtual bool isWorldBuilder()const;
    virtual void getDimension()const;
    virtual std::string getRequestId()const;
    PrecompiledCommandOrigin();
};
