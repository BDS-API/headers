#pragma once

#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../../unmapped/Material"


class RotatedPillarBlock : BlockLegacy {

public:
    static long mRotatedX;
    static long mRotatedZ;

    RotatedPillarBlock::~RotatedPillarBlock()
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;

    RotatedPillarBlock(std::string const&, int, Material const&);
};
