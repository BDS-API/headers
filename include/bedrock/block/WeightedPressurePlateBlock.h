#pragma once

#include "unmapped/BlockSource"
#include "../../unmapped/Material"
#include "../../unmapped/Block"
#include "../util/BlockPos"


class WeightedPressurePlateBlock : BasePressurePlateBlock {

public:
    static long MAX_WEIGHT_LIGHT;
    static long MAX_WEIGHT_HEAVY;

    virtual WeightedPressurePlateBlock::~WeightedPressurePlateBlock()
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getTickDelay()const;
    virtual void getSignalStrength(BlockSource &, BlockPos const&)const;
    virtual void getSignalForData(int)const;
    virtual void getRedstoneSignal(int)const;

    WeightedPressurePlateBlock(std::string const&, int, Material const&, int);
};
