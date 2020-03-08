#pragma once

#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Random"


class ConcretePowderBlock : HeavyBlock {

public:
    virtual ConcretePowderBlock::~ConcretePowderBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void shouldStopFalling(Actor &)const;
    virtual void buildDescriptionId[abi:cxx11](Block const&)const;
    virtual bool isAuxValueRelevantForPicking(void)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getDustColor(Block const&)const;
    virtual void getDustParticleName[abi:cxx11](Block const&)const;

    ConcretePowderBlock(std::string const&, int);
    void _tryTouchWater(BlockSource &, BlockPos const&, std::optional<BlockColor>)const;
};
