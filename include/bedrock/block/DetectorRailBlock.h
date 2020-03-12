#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "BaseRailBlock.h"
#include "../util/Random.h"


class DetectorRailBlock : BaseRailBlock {

public:
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    ~DetectorRailBlock();
    virtual bool isSignalSource()const;
    virtual void getVariant(Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual bool hasComparatorSignal()const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    DetectorRailBlock(std::string const&, int);
    void checkPressed(BlockSource &, BlockPos const&)const;
    void getTickDelay()const;
    void getSearchBB(BlockPos)const;
    void handlePressed(BlockSource &, BlockPos const&, bool)const;
};
