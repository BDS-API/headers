#pragma once

#include <string>
#include "BlockLegacy.h"


class ColoredBlock : BlockLegacy {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    ~ColoredBlock();
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    ColoredBlock(std::string const&, int, Material const&);
};
