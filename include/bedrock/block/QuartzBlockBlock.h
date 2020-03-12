#pragma once

#include "../util/BlockPos.h"
#include "unmapped/BlockSource.h"
#include <string>
#include "RotatedPillarBlock.h"
#include "../actor/Actor.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class QuartzBlockBlock : RotatedPillarBlock {

public:
    ~QuartzBlockBlock();
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    QuartzBlockBlock(std::string const&, int);
};
