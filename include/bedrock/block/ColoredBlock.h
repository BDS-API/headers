#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../../unmapped/Material"
#include "../../unmapped/Block"
#include "../util/BlockPos"


class ColoredBlock : BlockLegacy {

public:
    virtual ColoredBlock::~ColoredBlock()
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    ColoredBlock(std::string const&, int, Material const&);
};
