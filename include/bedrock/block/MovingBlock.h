#pragma once

class MovingBlock : ActorBlock {

public:
    virtual MovingBlock::~MovingBlock();
    virtual void onFallOn(BlockSource &, BlockPos const&, Actor *, float)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void pushesUpFallingBlocks(void)const;
    virtual void getVisualShapeInWorld(Block const&, BlockSource &, BlockPos const&, AABB &, bool)const;

    MovingBlock(std::string const&, int);
};
