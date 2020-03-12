#pragma once

#include <string>
#include "BlockLegacy.h"


class MagmaBlock : BlockLegacy {

public:
    ~MagmaBlock();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getVariant(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    MagmaBlock(std::string const&, int);
    void getTickDelay()const;
    void addToTickQueue(BlockSource &, BlockPos const&, Random &)const;
};
