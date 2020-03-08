#pragma once

#include "../../../unmapped/ActorUniqueID"
#include "../../level/Level"


class AutomationPlayerCommandOrigin : PlayerCommandOrigin {

public:
    virtual AutomationPlayerCommandOrigin::~AutomationPlayerCommandOrigin();
    virtual void getRequestId[abi:cxx11](void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual bool hasChatPerms(void)const;
    virtual bool hasTellPerms(void)const;
    virtual void getSourceId(void)const;
    virtual void getOriginType(void)const;
    virtual void toCommandOriginData(void)const;

    AutomationPlayerCommandOrigin(std::string const&, Player &);
    AutomationPlayerCommandOrigin(ActorUniqueID, Level &, std::string const&, CommandPermissionLevel, NetworkIdentifier const&);
};
