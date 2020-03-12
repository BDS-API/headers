#pragma once

#include "PlayerCommandOrigin.h"
#include <string>
#include "../../actor/Player.h"
#include "../../level/Level.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../../unmapped/NetworkIdentifier.h"


class AutomationPlayerCommandOrigin : PlayerCommandOrigin {

public:
    virtual void getOriginType()const;
    virtual void getPermissionsLevel()const;
    virtual void toCommandOriginData()const;
    virtual std::string getName()const;
    virtual std::string getRequestId()const;
    virtual bool hasTellPerms()const;
    virtual void clone()const;
    virtual bool hasChatPerms()const;
    ~AutomationPlayerCommandOrigin();
    virtual void getSourceId()const;
//  AutomationPlayerCommandOrigin(ActorUniqueID, Level &, std::string const&, CommandPermissionLevel, NetworkIdentifier const&); //TODO: incomplete function definition
    AutomationPlayerCommandOrigin(std::string const&, Player &);
};
