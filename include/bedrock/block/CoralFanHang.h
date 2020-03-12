#pragma once

#include "../util/AABB.h"
#include "CoralFan.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class CoralFanHang : CoralFan {

public:
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~CoralFanHang();
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void checkAlive(BlockSource &, BlockPos const&)const;
    void _getNeighborFromDirection(int)const;
    CoralFanHang(std::string const&, int);
};
