#pragma once

#include "../actor/Actor"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class MagmaBlock : BlockLegacy {

public:
    MagmaBlock::~MagmaBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    MagmaBlock(std::string const&, int);
    void getTickDelay()const;
    void addToTickQueue(BlockSource &, BlockPos const&, Random &)const;
};
