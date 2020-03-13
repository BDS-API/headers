#pragma once

#include <string>
#include "CommandOrigin.h"
#include "../../../unmapped/NetworkIdentifier.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class DevConsoleCommandOrigin : CommandOrigin {

public:
    ~DevConsoleCommandOrigin(); // _ZN23DevConsoleCommandOriginD2Ev
    virtual std::string getRequestId()const; // _ZNK23DevConsoleCommandOrigin12getRequestIdB5cxx11Ev
    virtual std::string getName()const; // _ZNK23DevConsoleCommandOrigin7getNameB5cxx11Ev
    virtual void getBlockPosition()const; // _ZNK23DevConsoleCommandOrigin16getBlockPositionEv
    virtual void getWorldPosition()const; // _ZNK23DevConsoleCommandOrigin16getWorldPositionEv
    virtual void getLevel()const; // _ZNK23DevConsoleCommandOrigin8getLevelEv
    virtual void getDimension()const; // _ZNK23DevConsoleCommandOrigin12getDimensionEv
    virtual void getEntity()const; // _ZNK23DevConsoleCommandOrigin9getEntityEv
    virtual void getPermissionsLevel()const; // _ZNK23DevConsoleCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK23DevConsoleCommandOrigin5cloneEv
    virtual bool canUseCommandsWithoutCheatsEnabled()const; // _ZNK23DevConsoleCommandOrigin34canUseCommandsWithoutCheatsEnabledEv
    virtual bool isSelectorExpansionAllowed()const; // _ZNK23DevConsoleCommandOrigin26isSelectorExpansionAllowedEv
    virtual void getSourceId()const; // _ZNK23DevConsoleCommandOrigin11getSourceIdEv
    virtual void getSourceSubId()const; // _ZNK23DevConsoleCommandOrigin14getSourceSubIdEv
    virtual void getOriginType()const; // _ZNK23DevConsoleCommandOrigin13getOriginTypeEv
    virtual void toCommandOriginData()const; // _ZNK23DevConsoleCommandOrigin19toCommandOriginDataEv
    DevConsoleCommandOrigin(Player &); // _ZN23DevConsoleCommandOriginC2ER6Player
    DevConsoleCommandOrigin(ActorUniqueID, Level *, NetworkIdentifier, unsigned char); // _ZN23DevConsoleCommandOriginC2E13ActorUniqueIDP5Level17NetworkIdentifierh
};
