#pragma once

#include <string>
#include "CommandOrigin.h"


class ServerCommandOrigin : CommandOrigin {

public:
    virtual void getOriginType()const;
    virtual void getBlockPosition()const;
    virtual std::string getRequestId()const;
    virtual void getDimension()const;
    virtual void getLevel()const;
    virtual void getPermissionsLevel()const;
    ~ServerCommandOrigin();
    virtual void clone()const;
    virtual std::string getName()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getWorldPosition()const;
    virtual void getEntity()const;
//  ServerCommandOrigin(std::string const&, ServerLevel &, CommandPermissionLevel); //TODO: incomplete function definition
};
