#pragma once

#include "../../actor/Actor"
#include "../../util/Vec3"


class VirtualCommandOrigin : CommandOrigin {

public:
    virtual VirtualCommandOrigin::~VirtualCommandOrigin()
    virtual void getRequestId()const;
    virtual void getName()const;
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
    virtual void getLevel()const;
    virtual void getDimension()const;
    virtual void getEntity()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual bool hasChatPerms()const;
    virtual bool hasTellPerms()const;
    virtual bool canUseAbility(AbilitiesIndex)const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getSourceId()const;
    virtual void getOutputReceiver()const;
    virtual void getOriginType()const;

    VirtualCommandOrigin(CommandOrigin const&, CommandOrigin const&, Vec3 const&);
    void _getEncapsulatedOrigin()const;
    VirtualCommandOrigin(CommandOrigin const&, Actor &, Vec3 const&);
    VirtualCommandOrigin(std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, Vec3 const&);
};
