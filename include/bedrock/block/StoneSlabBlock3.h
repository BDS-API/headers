#pragma once

#include "./SlabBlock.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class StoneSlabBlock3 : SlabBlock {

public:
    static std::string SLAB_NAMES;

    virtual ~StoneSlabBlock3();
    virtual bool isValidAuxValue(int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

//  StoneSlabBlock3(std::string const&, int, bool, WeakPtr<BlockLegacy>); //TODO: incomplete function definition
};
