#pragma once

#include <memory>
#include <string>
#include "CommandOrigin.h"


class VirtualCommandOrigin : CommandOrigin {

public:
    virtual void getSourceId()const;
    virtual void getEntity()const;
    ~VirtualCommandOrigin();
    virtual void getOutputReceiver()const;
    virtual void getDimension()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual std::string getName()const;
    virtual void getBlockPosition()const;
    virtual bool hasChatPerms()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;
    virtual void getLevel()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual void getWorldPosition()const;
    virtual bool hasTellPerms()const;
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition
    virtual std::string getRequestId()const;
    void _getEncapsulatedOrigin()const;
    VirtualCommandOrigin(CommandOrigin const&, CommandOrigin const&, Vec3 const&);
    VirtualCommandOrigin(std::unique_ptr<CommandOrigin>, std::unique_ptr<CommandOrigin>, Vec3 const&);
    VirtualCommandOrigin(CommandOrigin const&, Actor &, Vec3 const&);
};
