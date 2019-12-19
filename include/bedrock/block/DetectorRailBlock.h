#pragma once

class DetectorRailBlock : BaseRailBlock {

public:
    virtual DetectorRailBlock::~DetectorRailBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isSignalSource(void)const;
    virtual void shouldConnectToRedstone(BlockSource &, BlockPos const&, int)const;
    virtual void onRedstoneUpdate(BlockSource &, BlockPos const&, int, bool)const;
    virtual void setupRedstoneComponent(BlockSource &, BlockPos const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual bool hasComparatorSignal(void)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getVariant(Block const&)const;

    DetectorRailBlock(std::string const&, int);
    void getTickDelay(void)const;
    void checkPressed(BlockSource &, BlockPos const&)const;
    void getSearchBB(BlockPos)const;
    void handlePressed(BlockSource &, BlockPos const&, bool)const;
};
