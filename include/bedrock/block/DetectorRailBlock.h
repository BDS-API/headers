#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "./BaseRailBlock.h"
#include "../util/Random.h"
#include <string>


class DetectorRailBlock : BaseRailBlock {

public:
    virtual ~DetectorRailBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isSignalSource()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getVariant(Block const&)const;

    DetectorRailBlock(std::string const&, int);
    void getTickDelay()const;
    void checkPressed(BlockSource &, BlockPos const&)const;
    void getSearchBB(BlockPos)const;
    void handlePressed(BlockSource &, BlockPos const&, bool)const;
};
