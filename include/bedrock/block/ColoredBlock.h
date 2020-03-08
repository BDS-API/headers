#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"
#include "../../unmapped/Material"


class ColoredBlock : BlockLegacy {

public:
    ColoredBlock::~ColoredBlock()
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    ColoredBlock(std::string const&, int, Material const&);
};
