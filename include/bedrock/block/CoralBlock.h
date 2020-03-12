#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class CoralBlock : BlockLegacy {

public:
    static long DEAD_CORAL_OFFSET;
    static long DEAD_CORAL_BIT;

    ~CoralBlock();
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool canBeSilkTouched()const;
    virtual bool isValidAuxValue(int)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getVariant(Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    CoralBlock(std::string const&, int);
};
