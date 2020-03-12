#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "BasePressurePlateBlock.h"
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"


class PressurePlateBlock : BasePressurePlateBlock {

public:
    virtual void getSignalStrength(BlockSource &, BlockPos const&)const;
    virtual void getSignalForData(int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getRedstoneSignal(int)const;
    ~PressurePlateBlock();
//  PressurePlateBlock(std::string const&, int, Material const&, PressurePlateBlock::Sensitivity); //TODO: incomplete function definition
};
