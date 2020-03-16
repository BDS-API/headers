#pragma once

#include "BlockCommandOrigin.h"


class MinecartBlockCommandOrigin : public BlockCommandOrigin {

public:
    virtual ~MinecartBlockCommandOrigin(); // _ZN26MinecartBlockCommandOriginD2Ev
    virtual void __fake_function0(); // fake
    virtual void getBlockPosition()const; // _ZNK26MinecartBlockCommandOrigin16getBlockPositionEv
    virtual void getWorldPosition()const; // _ZNK26MinecartBlockCommandOrigin16getWorldPositionEv
    virtual void clone()const; // _ZNK26MinecartBlockCommandOrigin5cloneEv
    virtual bool canUseCommandsWithoutCheatsEnabled()const; // _ZNK26MinecartBlockCommandOrigin34canUseCommandsWithoutCheatsEnabledEv
    virtual void getOriginType()const; // _ZNK26MinecartBlockCommandOrigin13getOriginTypeEv
    virtual void getBlockEntity()const; // _ZNK26MinecartBlockCommandOrigin14getBlockEntityEv
    virtual void getBaseCommandBlock()const; // _ZNK26MinecartBlockCommandOrigin19getBaseCommandBlockEv
    MinecartBlockCommandOrigin(BlockSource &, ActorUniqueID const&); // _ZN26MinecartBlockCommandOriginC2ER11BlockSourceRK13ActorUniqueID
};
