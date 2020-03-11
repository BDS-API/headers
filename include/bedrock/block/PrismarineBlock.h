#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class PrismarineBlock : BlockLegacy {

public:
    virtual ~PrismarineBlock();
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;

    PrismarineBlock(std::string const&, int);
};
