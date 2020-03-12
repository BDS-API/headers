#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"
#include "HeavyBlock.h"
#include <optional>


class ConcretePowderBlock : HeavyBlock {

public:
    virtual bool isValidAuxValue(int)const;
    virtual void getDustColor(Block const&)const;
    virtual void shouldStopFalling(Actor &)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    ~ConcretePowderBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual std::string getDustParticleName(Block const&)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
//  void _tryTouchWater(BlockSource &, BlockPos const&, std::optional<BlockColor>)const; //TODO: incomplete function definition
    ConcretePowderBlock(std::string const&, int);
};
