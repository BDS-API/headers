#pragma once

#include <string>
#include "BlockLegacy.h"


class CakeBlock : BlockLegacy {

public:
    virtual void use(Player &, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual bool canBeSilkTouched()const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    ~CakeBlock();
    CakeBlock(std::string const&, int);
    void _removeCakeSlice(Player &, BlockSource &, BlockPos const&)const;
};
