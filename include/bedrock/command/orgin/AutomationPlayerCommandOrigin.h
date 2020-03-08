#pragma once

#include "../../../unmapped/NetworkIdentifier"
#include "../../level/Level"
#include "../../actor/Player"
#include "../../actor/unmapped/ActorUniqueID"


class AutomationPlayerCommandOrigin : PlayerCommandOrigin {

public:
    virtual AutomationPlayerCommandOrigin::~AutomationPlayerCommandOrigin()
    virtual void getRequestId()const;
    virtual void getName()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual bool hasChatPerms()const;
    virtual bool hasTellPerms()const;
    virtual void getSourceId()const;
    virtual void getOriginType()const;
    virtual void toCommandOriginData()const;

    AutomationPlayerCommandOrigin(std::string const&, Player &);
    AutomationPlayerCommandOrigin(ActorUniqueID, Level &, std::string const&, CommandPermissionLevel, NetworkIdentifier const&);
};
