#pragma once

#include "BlockCommandOrigin.h"


class MinecartBlockCommandOrigin : BlockCommandOrigin {

public:
    virtual void getWorldPosition()const;
    ~MinecartBlockCommandOrigin();
    virtual void getBlockPosition()const;
    virtual void clone()const;
    virtual void getBlockEntity()const;
    virtual void getBaseCommandBlock()const;
    virtual bool canUseCommandsWithoutCheatsEnabled()const;
    virtual void getOriginType()const;
    MinecartBlockCommandOrigin(BlockSource &, ActorUniqueID const&);
};
