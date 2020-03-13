#pragma once

#include <string>
#include "CommandOrigin.h"
#include "../../../unmapped/NetworkIdentifier.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class TestCommandOrigin : CommandOrigin {

public:
    ~TestCommandOrigin(); // _ZN17TestCommandOriginD2Ev
    virtual std::string getRequestId()const; // _ZNK17TestCommandOrigin12getRequestIdB5cxx11Ev
    virtual std::string getName()const; // _ZNK17TestCommandOrigin7getNameB5cxx11Ev
    virtual void getBlockPosition()const; // _ZNK17TestCommandOrigin16getBlockPositionEv
    virtual void getWorldPosition()const; // _ZNK17TestCommandOrigin16getWorldPositionEv
    virtual void getLevel()const; // _ZNK17TestCommandOrigin8getLevelEv
    virtual void getDimension()const; // _ZNK17TestCommandOrigin12getDimensionEv
    virtual void getEntity()const; // _ZNK17TestCommandOrigin9getEntityEv
    virtual void getPermissionsLevel()const; // _ZNK17TestCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK17TestCommandOrigin5cloneEv
    virtual bool canUseCommandsWithoutCheatsEnabled()const; // _ZNK17TestCommandOrigin34canUseCommandsWithoutCheatsEnabledEv
    virtual bool isSelectorExpansionAllowed()const; // _ZNK17TestCommandOrigin26isSelectorExpansionAllowedEv
    virtual void getSourceId()const; // _ZNK17TestCommandOrigin11getSourceIdEv
    virtual void getSourceSubId()const; // _ZNK17TestCommandOrigin14getSourceSubIdEv
    virtual void getOriginType()const; // _ZNK17TestCommandOrigin13getOriginTypeEv
    virtual void toCommandOriginData()const; // _ZNK17TestCommandOrigin19toCommandOriginDataEv
    TestCommandOrigin(Player &); // _ZN17TestCommandOriginC2ER6Player
    TestCommandOrigin(ActorUniqueID, Level *, NetworkIdentifier, unsigned char); // _ZN17TestCommandOriginC2E13ActorUniqueIDP5Level17NetworkIdentifierh
};
