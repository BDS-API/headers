#pragma once

class TripWireBlock : BlockLegacy {

public:
    virtual ~TripWireBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    void TripWireBlock(std::string const&, int);
    void getTickDelay(void)const;
    void updateSource(BlockSource &, BlockPos const&, Block const&)const;
    void checkPressed(BlockSource &, BlockPos const&)const;
    void shouldConnectTo(BlockSource &, BlockPos const&, int)const;
};
