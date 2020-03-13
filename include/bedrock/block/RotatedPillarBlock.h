#pragma once

#include <string>
#include "BlockLegacy.h"


class RotatedPillarBlock : BlockLegacy {

public:
    static long mRotatedX;
    static long mRotatedZ;

    ~RotatedPillarBlock(); // _ZN18RotatedPillarBlockD2Ev
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK18RotatedPillarBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK18RotatedPillarBlock13getMappedFaceEhRK5Block
    RotatedPillarBlock(std::string const&, int, Material const&); // _ZN18RotatedPillarBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Material
};
