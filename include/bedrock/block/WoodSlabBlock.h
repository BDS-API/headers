#pragma once

#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include "SlabBlock.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class WoodSlabBlock : SlabBlock {

public:
    virtual void getVariant(Block const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~WoodSlabBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
//  WoodSlabBlock(std::string const&, int, bool, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
};
