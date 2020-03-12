#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class MagmaBlock : BlockLegacy {

public:
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    ~MagmaBlock();
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    void getTickDelay()const;
    MagmaBlock(std::string const&, int);
    void addToTickQueue(BlockSource &, BlockPos const&, Random &)const;
};
