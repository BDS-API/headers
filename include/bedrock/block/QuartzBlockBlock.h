#pragma once

#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class QuartzBlockBlock : RotatedPillarBlock {

public:
    QuartzBlockBlock::~QuartzBlockBlock()
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    QuartzBlockBlock(std::string const&, int);
};
