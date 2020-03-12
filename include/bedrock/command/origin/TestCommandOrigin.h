#pragma once

#include "../../actor/Player.h"
#include "../../level/Level.h"
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../../unmapped/NetworkIdentifier.h"
#include "CommandOrigin.h"


class TestCommandOrigin : CommandOrigin {

public:
    virtual void getDimension()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    ~TestCommandOrigin();
    virtual void getEntity()const;
    virtual void getBlockPosition()const;
    virtual void getLevel()const;
    virtual void getSourceId()const;
    virtual void getWorldPosition()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void toCommandOriginData()const;
    virtual std::string getName()const;
    virtual void getSourceSubId()const;
    virtual std::string getRequestId()const;
    virtual void getPermissionsLevel()const;
    virtual void getOriginType()const;
    virtual void clone()const;
    TestCommandOrigin(Player &);
    TestCommandOrigin(ActorUniqueID, Level *, NetworkIdentifier, unsigned char);
};
