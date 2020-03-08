#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class WoodBlock : RotatedPillarBlock {

public:
    WoodBlock::~WoodBlock()
    virtual bool isStrippable(Block const&)const;
    virtual void getStrippedBlock(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    WoodBlock(std::string const&, int);
    void _createBlockWithStates(Block const&)const;
};
