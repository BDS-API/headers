#pragma once

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
    virtual void asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void checkAlive(BlockSource &, BlockPos const&)const;

    void CoralFanHang(std::string const&, int);
    void _getNeighborFromDirection(int)const;
};
