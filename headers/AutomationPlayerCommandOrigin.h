#pragma once

class AutomationPlayerCommandOrigin : PlayerCommandOrigin {

public:
    virtual ~AutomationPlayerCommandOrigin();
    virtual void getRequestId[abi:cxx11](void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual bool hasChatPerms(void)const;
    virtual bool hasTellPerms(void)const;
    virtual void getSourceId(void)const;
    virtual void getOriginType(void)const;
    virtual void toCommandOriginData(void)const;

    void AutomationPlayerCommandOrigin(std::string const&, Player &);
    void AutomationPlayerCommandOrigin(ActorUniqueID, Level &, std::string const&, CommandPermissionLevel, NetworkIdentifier const&);
};
