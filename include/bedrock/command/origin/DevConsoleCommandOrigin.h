#pragma once

#include "../../actor/Player.h"
#include "../../level/Level.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../../unmapped/NetworkIdentifier.h"
#include "CommandOrigin.h"


class DevConsoleCommandOrigin : CommandOrigin {

public:
    virtual void getOriginType()const;
    ~DevConsoleCommandOrigin();
    virtual void getLevel()const;
    virtual void getBlockPosition()const;
    virtual void getSourceSubId()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual std::string getRequestId()const;
    virtual void getWorldPosition()const;
    virtual void getEntity()const;
    virtual void getPermissionsLevel()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual std::string getName()const;
    virtual void toCommandOriginData()const;
    virtual void getDimension()const;
    virtual void clone()const;
    virtual void getSourceId()const;
    DevConsoleCommandOrigin(ActorUniqueID, Level *, NetworkIdentifier, unsigned char);
    DevConsoleCommandOrigin(Player &);
};
