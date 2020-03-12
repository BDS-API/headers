#pragma once

#include <string>
#include "BlockLegacy.h"


class TripWireBlock : BlockLegacy {

public:
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~TripWireBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    void shouldConnectTo(BlockSource &, BlockPos const&, int)const;
    TripWireBlock(std::string const&, int);
    void checkPressed(BlockSource &, BlockPos const&)const;
    void getTickDelay()const;
    void updateSource(BlockSource &, BlockPos const&, Block const&)const;
};
