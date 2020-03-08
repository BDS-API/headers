#pragma once

#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../../unmapped/Material"


class WeightedPressurePlateBlock : BasePressurePlateBlock {

public:
    static long MAX_WEIGHT_LIGHT;
    static long MAX_WEIGHT_HEAVY;

    WeightedPressurePlateBlock::~WeightedPressurePlateBlock()
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getTickDelay()const;
    virtual void getSignalStrength(BlockSource &, BlockPos const&)const;
    virtual void getSignalForData(int)const;
    virtual void getRedstoneSignal(int)const;

    WeightedPressurePlateBlock(std::string const&, int, Material const&, int);
};
