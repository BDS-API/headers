#pragma once

class VirtualCommandOrigin : CommandOrigin {

public:
    virtual ~VirtualCommandOrigin();
    virtual void getRequestId[abi:cxx11](void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual bool hasChatPerms(void)const;
    virtual bool hasTellPerms(void)const;
    virtual bool canUseAbility(AbilitiesIndex)const;
    virtual bool canUseCommandsWithoutCheatsEnabled(void)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getOutputReceiver(void)const;
    virtual void getOriginType(void)const;

    void VirtualCommandOrigin(CommandOrigin const&, CommandOrigin const&, Vec3 const&);
    void _getEncapsulatedOrigin(void)const;
    void VirtualCommandOrigin(CommandOrigin const&, Actor &, Vec3 const&);
    void VirtualCommandOrigin(std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, std::unique_ptr<CommandOrigin, std::default_delete<CommandOrigin>>, Vec3 const&);
};
