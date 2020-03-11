#pragma once

#include "../../block/unmapped/BlockSource.h"
#include "./BlockCommandOrigin.h"
#include "../../actor/unmapped/ActorUniqueID.h"


class MinecartBlockCommandOrigin : BlockCommandOrigin {

public:
    virtual ~MinecartBlockCommandOrigin();
    virtual void getBlockPosition()const;
    virtual void getWorldPosition()const;
    virtual void clone()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getOriginType()const;
    virtual void getBlockEntity()const;
    virtual void getBaseCommandBlock()const;

    MinecartBlockCommandOrigin(BlockSource &, ActorUniqueID const&);
};
