#pragma once

#include "unmapped/BlockSource"
#include "../util/Random"
#include "../../unmapped/Material"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "../actor/Player"
#include "actor/BlockActor"


class ActorBlock : BlockLegacy {

public:
    virtual ActorBlock::~ActorBlock()
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual bool canBeSilkTouched()const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    ActorBlock(std::string const&, int, Material const&);
    void newBlockEntity(BlockPos const&, Block const&)const;
};
