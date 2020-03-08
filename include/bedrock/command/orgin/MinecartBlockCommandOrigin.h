#pragma once

#include "../../block/unmapped/BlockSource"
#include "../../actor/unmapped/ActorUniqueID"


class MinecartBlockCommandOrigin : BlockCommandOrigin {

public:
    virtual MinecartBlockCommandOrigin::~MinecartBlockCommandOrigin()
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
    virtual void clone()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getOriginType()const;
    virtual void getBlockEntity()const;
    virtual void getBaseCommandBlock()const;

    MinecartBlockCommandOrigin(BlockSource &, ActorUniqueID const&);
};
