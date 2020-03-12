#pragma once

#include "../util/AABB.h"
#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class CocoaBlock : BlockLegacy {

public:
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual bool canSurvive(BlockSource &, BlockPos const&)const;
    virtual bool canBeSilkTouched()const;
//  virtual void onFertilized(BlockSource &, BlockPos const&, Actor *, FertilizerType)const; //TODO: incomplete function definition
    ~CocoaBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onPlace(BlockSource &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    CocoaBlock(std::string const&, int);
};
