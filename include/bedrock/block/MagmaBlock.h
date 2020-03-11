#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class MagmaBlock : BlockLegacy {

public:
    virtual ~MagmaBlock();
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
