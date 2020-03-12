#pragma once

#include <optional>
#include "HeavyBlock.h"
#include <string>


class ConcretePowderBlock : HeavyBlock {

public:
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    ~ConcretePowderBlock();
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual std::string getDustParticleName(Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getDustColor(Block const&)const;
    virtual void shouldStopFalling(Actor &)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool isValidAuxValue(int)const;
    ConcretePowderBlock(std::string const&, int);
    void _tryTouchWater(BlockSource &, BlockPos const&, std::optional<BlockColor>)const;
};
