#pragma once

#include "../../unmapped/BlockPos"
#include "../../unmapped/BlockSource"
#include "../actor/Player"
#include "../../unmapped/Random"


class ActorBlock : BlockLegacy {

public:
    virtual ActorBlock::~ActorBlock();
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual bool canBeSilkTouched(void)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    ActorBlock(std::string const&, int, Material const&);
    void newBlockEntity(BlockPos const&, Block const&)const;
};
