#pragma once

#include "../../unmapped/BlockSource"


class PressurePlateBlock : BasePressurePlateBlock {

public:
    virtual PressurePlateBlock::~PressurePlateBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSignalStrength(BlockSource &, BlockPos const&)const;
    virtual void getSignalForData(int)const;
    virtual void getRedstoneSignal(int)const;

    PressurePlateBlock(std::string const&, int, Material const&, PressurePlateBlock::Sensitivity);
};
