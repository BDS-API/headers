#pragma once

#include "../../actor/Player.h"
#include "../../level/Level.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../../unmapped/NetworkIdentifier.h"
#include "./CommandOrigin.h"
#include <string>


class DevConsoleCommandOrigin : CommandOrigin {

public:
    virtual ~DevConsoleCommandOrigin();
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
    virtual void getSourceId()const;
    virtual void getSourceSubId()const;
    virtual void getOriginType()const;
    virtual void toCommandOriginData()const;

    DevConsoleCommandOrigin(Player &);
    DevConsoleCommandOrigin(ActorUniqueID, Level *, NetworkIdentifier, unsigned char);
};
