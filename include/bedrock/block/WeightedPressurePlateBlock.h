#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "BasePressurePlateBlock.h"
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"


class WeightedPressurePlateBlock : BasePressurePlateBlock {

public:
    static long MAX_WEIGHT_LIGHT;
    static long MAX_WEIGHT_HEAVY;

    virtual void getSignalForData(int)const;
    ~WeightedPressurePlateBlock();
    virtual void getTickDelay()const;
    virtual void getRedstoneSignal(int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSignalStrength(BlockSource &, BlockPos const&)const;
    WeightedPressurePlateBlock(std::string const&, int, Material const&, int);
};
