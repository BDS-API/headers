#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/BaseGameVersion.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include <string>


class ChemicalHeatBlock : BlockLegacy {

public:
    virtual ~ChemicalHeatBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getExtraRenderLayers()const;

    ChemicalHeatBlock(std::string const&, int);
    void _getRelativeOffsets();
    void _melt(BlockSource &, BlockPos const&, Random &)const;
    void _queueTick(BlockSource &, BlockPos const&, Random &)const;
};
