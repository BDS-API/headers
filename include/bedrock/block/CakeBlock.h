#pragma once

#include "../actor/Player"
#include "../actor/Actor"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../util/AABB"


class CakeBlock : BlockLegacy {

public:
    CakeBlock::~CakeBlock()
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void mayPlace(BlockSource &, BlockPos const&, unsigned char)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool hasComparatorSignal()const;
    virtual void getComparatorSignal(BlockSource &, BlockPos const&, Block const&, unsigned char)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool canBeSilkTouched()const;

    CakeBlock(std::string const&, int);
    void _removeCakeSlice(Player &, BlockSource &, BlockPos const&)const;
};
