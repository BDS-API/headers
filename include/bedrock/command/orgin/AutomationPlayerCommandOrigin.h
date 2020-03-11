#pragma once

#include "../../actor/Player.h"
#include "../../level/Level.h"
#include "./PlayerCommandOrigin.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../../unmapped/NetworkIdentifier.h"
#include <string>


class AutomationPlayerCommandOrigin : PlayerCommandOrigin {

public:
    virtual ~AutomationPlayerCommandOrigin();
    virtual std::string getRequestId()const;
    virtual std::string getName()const;
    virtual void getPermissionsLevel()const;
    virtual void clone()const;
    virtual bool hasChatPerms()const;
    virtual bool hasTellPerms()const;
    virtual void getSourceId()const;
    virtual void getOriginType()const;
    virtual void toCommandOriginData()const;

    AutomationPlayerCommandOrigin(std::string const&, Player &);
//  AutomationPlayerCommandOrigin(ActorUniqueID, Level &, std::string const&, CommandPermissionLevel, NetworkIdentifier const&); //TODO: incomplete function definition
};
