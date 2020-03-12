#pragma once

#include <string>
#include "BlockLegacy.h"


class ActorBlock : BlockLegacy {

public:
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    ~ActorBlock();
    virtual bool canBeSilkTouched()const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    void newBlockEntity(BlockPos const&, Block const&)const;
    ActorBlock(std::string const&, int, Material const&);
};
