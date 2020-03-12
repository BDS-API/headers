#pragma once

#include <string>
#include "BaseRailBlock.h"
#include "../util/BlockPos.h"


class DetectorRailBlock : BaseRailBlock {

public:
    virtual bool hasComparatorSignal()const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    ~DetectorRailBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual bool isSignalSource()const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    DetectorRailBlock(std::string const&, int);
    void getTickDelay()const;
    void handlePressed(BlockSource &, BlockPos const&, bool)const;
    void getSearchBB(BlockPos)const;
    void checkPressed(BlockSource &, BlockPos const&)const;
};
