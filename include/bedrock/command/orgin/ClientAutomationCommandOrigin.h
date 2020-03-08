#pragma once



class ClientAutomationCommandOrigin : CommandOrigin {

public:
    virtual ClientAutomationCommandOrigin::~ClientAutomationCommandOrigin()
    virtual void getRequestId()const;
    virtual void getName()const;
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
    virtual void getLevel()const;
    virtual void getDimension()const;
    virtual void getEntity()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;
    virtual void toCommandOriginData()const;

    ClientAutomationCommandOrigin(std::string const&);
};
