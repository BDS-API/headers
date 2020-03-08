#pragma once

#include "../../../unmapped/NetworkIdentifier"
#include "../../level/Level"
#include "../../actor/Player"
#include "../../actor/unmapped/ActorUniqueID"


class DevConsoleCommandOrigin : CommandOrigin {

public:
    virtual DevConsoleCommandOrigin::~DevConsoleCommandOrigin()
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
    virtual void getSourceId()const;
    virtual void getSourceSubId()const;
    virtual void getOriginType()const;
    virtual void toCommandOriginData()const;

    DevConsoleCommandOrigin(Player &);
    DevConsoleCommandOrigin(ActorUniqueID, Level *, NetworkIdentifier, unsigned char);
};
