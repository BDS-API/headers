#pragma once

class PrecompiledCommandOrigin : CommandOrigin {

public:
    virtual PrecompiledCommandOrigin::~PrecompiledCommandOrigin();
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
    virtual bool isWorldBuilder(void)const;
    virtual bool canUseCommandsWithoutCheatsEnabled(void)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getOriginType(void)const;

    PrecompiledCommandOrigin(void);
};
