#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"


class ConcretePowderBlock : HeavyBlock {

public:
    virtual ConcretePowderBlock::~ConcretePowderBlock()
    virtual bool isValidAuxValue(int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void shouldStopFalling(Actor &)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getDustColor(Block const&)const;
    virtual void getDustParticleName(Block const&)const;

    ConcretePowderBlock(std::string const&, int);
    void _tryTouchWater(BlockSource &, BlockPos const&, std::optional<BlockColor>)const;
};
