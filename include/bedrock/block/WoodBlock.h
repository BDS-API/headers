#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "RotatedPillarBlock.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class WoodBlock : RotatedPillarBlock {

public:
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getStrippedBlock(Block const&)const;
    ~WoodBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isStrippable(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    void _createBlockWithStates(Block const&)const;
    WoodBlock(std::string const&, int);
};
