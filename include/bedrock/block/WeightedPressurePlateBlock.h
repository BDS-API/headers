#pragma once

#include <string>
#include "BasePressurePlateBlock.h"


class WeightedPressurePlateBlock : BasePressurePlateBlock {

public:
    static long MAX_WEIGHT_LIGHT;
    static long MAX_WEIGHT_HEAVY;

    virtual void getRedstoneSignal(int)const;
    virtual void getSignalStrength(BlockSource &, BlockPos const&)const;
    ~WeightedPressurePlateBlock();
    virtual void getSignalForData(int)const;
    virtual void getTickDelay()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    WeightedPressurePlateBlock(std::string const&, int, Material const&, int);
};
