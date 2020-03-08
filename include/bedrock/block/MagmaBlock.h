#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"


class MagmaBlock : BlockLegacy {

public:
    virtual MagmaBlock::~MagmaBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;

    MagmaBlock(std::string const&, int);
    void getTickDelay(void)const;
    void addToTickQueue(BlockSource &, BlockPos const&, Random &)const;
};
