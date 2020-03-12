#pragma once

#include "../../actor/Actor.h"
#include "../../util/Vec3.h"
#include "CommandOrigin.h"
#include <memory>


class VirtualCommandOrigin : CommandOrigin {

public:
    virtual bool hasTellPerms()const;
    virtual bool hasChatPerms()const;
    virtual void getSourceId()const;
    virtual void getBlockPosition()const;
    virtual void clone()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getOutputReceiver()const;
    virtual void getEntity()const;
    virtual void getPermissionsLevel()const;
    virtual void getLevel()const;
    virtual std::string getName()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;
    ~VirtualCommandOrigin();
//  virtual bool canUseAbility(AbilitiesIndex)const; //TODO: incomplete function definition
    virtual void getDimension()const;
    virtual std::string getRequestId()const;
    virtual void getWorldPosition()const;
    void _getEncapsulatedOrigin()const;
    VirtualCommandOrigin(CommandOrigin const&, Actor &, Vec3 const&);
    VirtualCommandOrigin(CommandOrigin const&, CommandOrigin const&, Vec3 const&);
    VirtualCommandOrigin(std::unique_ptr<CommandOrigin>, std::unique_ptr<CommandOrigin>, Vec3 const&);
};
