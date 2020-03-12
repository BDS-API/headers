#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class ColoredBlock : BlockLegacy {

public:
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    ~ColoredBlock();
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    ColoredBlock(std::string const&, int, Material const&);
};
