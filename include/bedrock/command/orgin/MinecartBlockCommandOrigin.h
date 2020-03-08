#pragma once

#include "../../actor/unmapped/ActorUniqueID"
#include "../../block/unmapped/BlockSource"


class MinecartBlockCommandOrigin : BlockCommandOrigin {

public:
    MinecartBlockCommandOrigin::~MinecartBlockCommandOrigin()
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
    virtual void clone()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getOriginType()const;
    virtual void getBlockEntity()const;
    virtual void getBaseCommandBlock()const;

    MinecartBlockCommandOrigin(BlockSource &, ActorUniqueID const&);
};
