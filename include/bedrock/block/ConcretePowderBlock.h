#pragma once

#include "unmapped/BlockSource.h"
#include "./HeavyBlock.h"
#include <string>
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include <optional>
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class ConcretePowderBlock : HeavyBlock {

public:
    virtual ~ConcretePowderBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void shouldStopFalling(Actor &)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getDustColor(Block const&)const;
    virtual std::string getDustParticleName(Block const&)const;

    ConcretePowderBlock(std::string const&, int);
//  void _tryTouchWater(BlockSource &, BlockPos const&, std::optional<BlockColor>)const; //TODO: incomplete function definition
};
