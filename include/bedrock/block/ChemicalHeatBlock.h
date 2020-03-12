#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/BaseGameVersion.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class ChemicalHeatBlock : BlockLegacy {

public:
    ~ChemicalHeatBlock();
    virtual void getExtraRenderLayers()const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool canBeUsedInCommands(bool, BaseGameVersion const&)const;
    void _getRelativeOffsets();
    void _queueTick(BlockSource &, BlockPos const&, Random &)const;
    ChemicalHeatBlock(std::string const&, int);
    void _melt(BlockSource &, BlockPos const&, Random &)const;
};
