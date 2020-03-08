#pragma once

#include "../../actor/unmapped/ActorUniqueID"
#include "../../actor/Player"
#include "../../../unmapped/NetworkIdentifier"
#include "../../level/Level"


class TestCommandOrigin : CommandOrigin {

public:
    TestCommandOrigin::~TestCommandOrigin()
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

    TestCommandOrigin(Player &);
    TestCommandOrigin(ActorUniqueID, Level *, NetworkIdentifier, unsigned char);
};
