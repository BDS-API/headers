#pragma once



class PrecompiledCommandOrigin : CommandOrigin {

public:
    virtual PrecompiledCommandOrigin::~PrecompiledCommandOrigin()
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
    virtual bool isWorldBuilder()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;

    PrecompiledCommandOrigin(void);
};
