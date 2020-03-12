#pragma once

#include <string>
#include "BlockLegacy.h"


class ChemicalHeatBlock : BlockLegacy {

public:
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getExtraRenderLayers()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    ~ChemicalHeatBlock();
    void _queueTick(BlockSource &, BlockPos const&, Random &)const;
    void _melt(BlockSource &, BlockPos const&, Random &)const;
    ChemicalHeatBlock(std::string const&, int);
    void _getRelativeOffsets();
};
