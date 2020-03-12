#pragma once

#include <string>
#include "CommandOrigin.h"
#include "../../level/ServerLevel.h"


class ServerCommandOrigin : CommandOrigin {

public:
    virtual void getDimension()const;
    virtual void getLevel()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getOriginType()const;
    virtual std::string getName()const;
    virtual void getPermissionsLevel()const;
    virtual std::string getRequestId()const;
    ~ServerCommandOrigin();
    virtual void clone()const;
    virtual void getEntity()const;
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
//  ServerCommandOrigin(std::string const&, ServerLevel &, CommandPermissionLevel); //TODO: incomplete function definition
};
