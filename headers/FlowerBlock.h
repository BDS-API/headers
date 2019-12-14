#pragma once

class FlowerBlock : BushBlock {

public:
    virtual ~FlowerBlock();
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual bool canContainLiquid(void)const;
    virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const;
    virtual void mayPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getRenderLayer(void)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getRenderLayer(Block const&, BlockSource &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void FlowerBlock(std::string const&, int, FlowerBlock::Type);
    void _randomWalk(BlockSource &, int &, int &, int &, int)const;
    void _getRenderLayerImpl(void)const;
};
