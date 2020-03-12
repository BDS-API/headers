#pragma once

#include <string>
#include "BasePressurePlateBlock.h"


class PressurePlateBlock : BasePressurePlateBlock {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSignalForData(int)const;
    virtual void getSignalStrength(BlockSource &, BlockPos const&)const;
    virtual void getRedstoneSignal(int)const;
    ~PressurePlateBlock();
//  PressurePlateBlock(std::string const&, int, Material const&, PressurePlateBlock::Sensitivity); //TODO: incomplete function definition
};
