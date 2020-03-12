#pragma once

#include <string>
#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../../unmapped/NetworkIdentifier.h"
#include "CommandOrigin.h"


class TestCommandOrigin : CommandOrigin {

public:
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getEntity()const;
    virtual void getSourceSubId()const;
    virtual void getSourceId()const;
    virtual void getOriginType()const;
    virtual void toCommandOriginData()const;
    virtual std::string getRequestId()const;
    virtual void getDimension()const;
    virtual void getLevel()const;
    virtual void clone()const;
    virtual void getBlockPosition()const;
    virtual bool isSelectorExpansionAllowed()const;
    virtual void getWorldPosition()const;
    ~TestCommandOrigin();
    virtual void getPermissionsLevel()const;
    virtual std::string getName()const;
    TestCommandOrigin(Player &);
    TestCommandOrigin(ActorUniqueID, Level *, NetworkIdentifier, unsigned char);
};
