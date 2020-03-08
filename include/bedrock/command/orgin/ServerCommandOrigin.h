#pragma once

#include "../../level/ServerLevel"


class ServerCommandOrigin : CommandOrigin {

public:
    virtual ServerCommandOrigin::~ServerCommandOrigin()
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

    ServerCommandOrigin(std::string const&, ServerLevel &, CommandPermissionLevel);
};
