#pragma once

#include <string>
#include "RotatedPillarBlock.h"


class QuartzBlockBlock : RotatedPillarBlock {

public:
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~QuartzBlockBlock();
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getVariant(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    QuartzBlockBlock(std::string const&, int);
};
