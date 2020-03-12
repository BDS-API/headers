#pragma once

#include "../../actor/unmapped/ActorUniqueID.h"
#include "../../block/unmapped/BlockSource.h"
#include "BlockCommandOrigin.h"


class MinecartBlockCommandOrigin : BlockCommandOrigin {

public:
    virtual void getOriginType()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getWorldPosition()const;
    virtual void getBlockEntity()const;
    virtual void getBlockPosition()const;
    virtual void clone()const;
    ~MinecartBlockCommandOrigin();
    virtual void getBaseCommandBlock()const;
    MinecartBlockCommandOrigin(BlockSource &, ActorUniqueID const&);
};
