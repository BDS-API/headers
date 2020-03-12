#pragma once

#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include "SlabBlock.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class StoneSlabBlock3 : SlabBlock {

public:
    static std::string SLAB_NAMES;

    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    ~StoneSlabBlock3();
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
//  StoneSlabBlock3(std::string const&, int, bool, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
};
