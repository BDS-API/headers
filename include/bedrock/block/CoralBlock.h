#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../util/BlockPos"
#include "../../unmapped/Block"


class CoralBlock : BlockLegacy {

public:
    static long DEAD_CORAL_OFFSET;
    static long DEAD_CORAL_BIT;

    virtual CoralBlock::~CoralBlock()
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool isValidAuxValue(int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual bool canBeSilkTouched()const;

    CoralBlock(std::string const&, int);
};
