#pragma once

#include "../../unmapped/BaseGameVersion"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"


class ChemicalHeatBlock : BlockLegacy {

public:
    ChemicalHeatBlock::~ChemicalHeatBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getExtraRenderLayers()const;

    ChemicalHeatBlock(std::string const&, int);
    void _getRelativeOffsets();
    void _melt(BlockSource &, BlockPos const&, Random &)const;
    void _queueTick(BlockSource &, BlockPos const&, Random &)const;
};
