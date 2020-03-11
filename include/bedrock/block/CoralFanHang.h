#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "../util/AABB.h"
#include "./CoralFan.h"
#include "../util/Random.h"
#include <string>


class CoralFanHang : CoralFan {

public:
    virtual ~CoralFanHang();
    virtual void randomlyModifyPosition(BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void checkAlive(BlockSource &, BlockPos const&)const;

    CoralFanHang(std::string const&, int);
    void _getNeighborFromDirection(int)const;
};
