#pragma once

#include "./CommandOrigin.h"
#include "../../level/ServerLevel.h"
#include <string>


class ServerCommandOrigin : CommandOrigin {

public:
    virtual ~ServerCommandOrigin();
    virtual std::string getRequestId()const;
    virtual std::string getName()const;
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

//  ServerCommandOrigin(std::string const&, ServerLevel &, CommandPermissionLevel); //TODO: incomplete function definition
};
