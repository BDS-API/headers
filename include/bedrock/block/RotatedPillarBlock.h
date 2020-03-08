#pragma once

#include "../actor/Actor"
#include "../../unmapped/Material"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../util/Vec3"


class RotatedPillarBlock : BlockLegacy {

public:
    static long mRotatedX;
    static long mRotatedZ;

    virtual RotatedPillarBlock::~RotatedPillarBlock()
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;

    RotatedPillarBlock(std::string const&, int, Material const&);
};
