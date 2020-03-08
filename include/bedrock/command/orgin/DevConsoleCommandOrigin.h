#pragma once

#include "../../level/Level"
#include "../../../unmapped/ActorUniqueID"
#include "../../actor/Player"


class DevConsoleCommandOrigin : CommandOrigin {

public:
    virtual DevConsoleCommandOrigin::~DevConsoleCommandOrigin();
    virtual void getRequestId[abi:cxx11](void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void getBlockPosition(void)const;
    virtual void getWorldPosition(void)const;
    virtual void getLevel(void)const;
    virtual void getDimension(void)const;
    virtual void getEntity(void)const;
    virtual void getPermissionsLevel(void)const;
    virtual void clone(void)const;
    virtual bool canUseCommandsWithoutCheatsEnabled(void)const;
    virtual bool isSelectorExpansionAllowed(void)const;
    virtual void getSourceId(void)const;
    virtual void getSourceSubId(void)const;
    virtual void getOriginType(void)const;
    virtual void toCommandOriginData(void)const;

    DevConsoleCommandOrigin(Player &);
    DevConsoleCommandOrigin(ActorUniqueID, Level *, NetworkIdentifier, unsigned char);
};
