#pragma once

#include <string>
#include "CommandOrigin.h"


class BlockCommandOrigin : CommandOrigin {

public:
    ~BlockCommandOrigin(); // _ZN18BlockCommandOriginD2Ev
    virtual std::string getRequestId()const; // _ZNK18BlockCommandOrigin12getRequestIdB5cxx11Ev
    virtual std::string getName()const; // _ZNK18BlockCommandOrigin7getNameB5cxx11Ev
    virtual void getBlockPosition()const; // _ZNK18BlockCommandOrigin16getBlockPositionEv
    virtual void getWorldPosition()const; // _ZNK18BlockCommandOrigin16getWorldPositionEv
    virtual void getLevel()const; // _ZNK18BlockCommandOrigin8getLevelEv
    virtual void getDimension()const; // _ZNK18BlockCommandOrigin12getDimensionEv
    virtual void getEntity()const; // _ZNK18BlockCommandOrigin9getEntityEv
    virtual void getPermissionsLevel()const; // _ZNK18BlockCommandOrigin19getPermissionsLevelEv
    virtual void clone()const; // _ZNK18BlockCommandOrigin5cloneEv
    virtual bool canUseCommandsWithoutCheatsEnabled()const; // _ZNK18BlockCommandOrigin34canUseCommandsWithoutCheatsEnabledEv
    virtual bool isSelectorExpansionAllowed()const; // _ZNK18BlockCommandOrigin26isSelectorExpansionAllowedEv
    virtual void getOriginType()const; // _ZNK18BlockCommandOrigin13getOriginTypeEv
    virtual void getBlockEntity()const; // _ZNK18BlockCommandOrigin14getBlockEntityEv
    virtual void getBaseCommandBlock()const; // _ZNK18BlockCommandOrigin19getBaseCommandBlockEv
    BlockCommandOrigin(BlockSource &, BlockPos const&); // _ZN18BlockCommandOriginC2ER11BlockSourceRK8BlockPos
};
