#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../../unmapped/NetworkIdentifier.h"
#include "CommandOrigin.h"


class DevConsoleCommandOrigin : CommandOrigin {

public:
    virtual void clone()const;
    virtual void getEntity()const;
    virtual void toCommandOriginData()const;
    ~DevConsoleCommandOrigin();
    virtual void getWorldPosition()const;
    virtual std::string getName()const;
    virtual void getBlockPosition()const;
    virtual void getOriginType()const;
    virtual void getPermissionsLevel()const;
    virtual void getLevel()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getSourceSubId()const;
    virtual std::string getRequestId()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getSourceId()const;
    virtual void getDimension()const;
    DevConsoleCommandOrigin(Player &);
    DevConsoleCommandOrigin(ActorUniqueID, Level *, NetworkIdentifier, unsigned char);
};
