#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "./RotatedPillarBlock.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class WoodBlock : RotatedPillarBlock {

public:
    virtual ~WoodBlock();
    virtual bool isStrippable(Block const&)const;
    virtual void getStrippedBlock(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    WoodBlock(std::string const&, int);
    void _createBlockWithStates(Block const&)const;
};
