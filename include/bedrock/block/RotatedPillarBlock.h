#pragma once

#include <string>
#include "BlockLegacy.h"


class RotatedPillarBlock : BlockLegacy {

public:
    static long mRotatedX;
    static long mRotatedZ;

    ~RotatedPillarBlock();
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    RotatedPillarBlock(std::string const&, int, Material const&);
};
