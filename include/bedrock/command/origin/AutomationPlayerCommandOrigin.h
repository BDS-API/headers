#pragma once

#include <string>
#include "PlayerCommandOrigin.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class AutomationPlayerCommandOrigin : PlayerCommandOrigin {

public:
    virtual std::string getName()const;
    ~AutomationPlayerCommandOrigin();
    virtual std::string getRequestId()const;
    virtual void getPermissionsLevel()const;
    virtual void toCommandOriginData()const;
    virtual bool hasChatPerms()const;
    virtual void getOriginType()const;
    virtual bool hasTellPerms()const;
    virtual void clone()const;
    virtual void getSourceId()const;
    AutomationPlayerCommandOrigin(std::string const&, Player &);
//  AutomationPlayerCommandOrigin(ActorUniqueID, Level &, std::string const&, CommandPermissionLevel, NetworkIdentifier const&); //TODO: incomplete function definition
};
