#pragma once

#include "CoralFan.h"
#include <string>


class CoralFanHang : CoralFan {

public:
    ~CoralFanHang(); // _ZN12CoralFanHangD2Ev
    virtual void randomlyModifyPosition(BlockPos const&)const; // _ZNK12CoralFanHang22randomlyModifyPositionERK8BlockPos
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const; // _ZNK12CoralFanHang7getAABBER11BlockSourceRK8BlockPosRK5BlockR4AABBb
    virtual void onPlace(BlockSource &, BlockPos const&)const; // _ZNK12CoralFanHang7onPlaceER11BlockSourceRK8BlockPos
    virtual void mayPlaceOn(BlockSource &, BlockPos const&)const; // _ZNK12CoralFanHang10mayPlaceOnER11BlockSourceRK8BlockPos
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const; // _ZNK12CoralFanHang15neighborChangedER11BlockSourceRK8BlockPosS4_
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK12CoralFanHang16getResourceCountER6RandomRK5Blocki
    virtual void getResourceItem(Random &, Block const&, int)const; // _ZNK12CoralFanHang15getResourceItemER6RandomRK5Blocki
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const; // _ZNK12CoralFanHang14asItemInstanceER11BlockSourceRK8BlockPosRK5Block
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK12CoralFanHang18buildDescriptionIdB5cxx11ERK5Block
    virtual void getVariant(Block const&)const; // _ZNK12CoralFanHang10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK12CoralFanHang24getSilkTouchItemInstanceERK5Block
    virtual void checkAlive(BlockSource &, BlockPos const&)const; // _ZNK12CoralFanHang10checkAliveER11BlockSourceRK8BlockPos
    CoralFanHang(std::string const&, int); // _ZN12CoralFanHangC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void _getNeighborFromDirection(int)const; // _ZNK12CoralFanHang25_getNeighborFromDirectionEi
};
