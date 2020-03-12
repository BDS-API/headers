#pragma once

#include <string>
#include "BlockLegacy.h"


class CoralBlock : BlockLegacy {

public:
    static long DEAD_CORAL_OFFSET;
    static long DEAD_CORAL_BIT;

    virtual bool isValidAuxValue(int)const;
    virtual void getVariant(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    ~CoralBlock();
    virtual bool canBeSilkTouched()const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    CoralBlock(std::string const&, int);
};
