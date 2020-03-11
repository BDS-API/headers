#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "./BasePressurePlateBlock.h"
#include <string>


class PressurePlateBlock : BasePressurePlateBlock {

public:
    virtual ~PressurePlateBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSignalStrength(BlockSource &, BlockPos const&)const;
    virtual void getSignalForData(int)const;
    virtual void getRedstoneSignal(int)const;

//  PressurePlateBlock(std::string const&, int, Material const&, PressurePlateBlock::Sensitivity); //TODO: incomplete function definition
};
