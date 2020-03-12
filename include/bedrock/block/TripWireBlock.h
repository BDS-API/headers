#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class TripWireBlock : BlockLegacy {

public:
    virtual void onRemove(BlockSource &, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void entityInside(BlockSource &, BlockPos const&, Actor &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    ~TripWireBlock();
    TripWireBlock(std::string const&, int);
    void shouldConnectTo(BlockSource &, BlockPos const&, int)const;
    void updateSource(BlockSource &, BlockPos const&, Block const&)const;
    void checkPressed(BlockSource &, BlockPos const&)const;
    void getTickDelay()const;
};
