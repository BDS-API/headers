#pragma once

#include <string>
#include "ActorBlock.h"


class FaceDirectionalActorBlock : ActorBlock {

public:
    ~FaceDirectionalActorBlock(); // _ZN25FaceDirectionalActorBlockD2Ev
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK25FaceDirectionalActorBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK25FaceDirectionalActorBlock13getMappedFaceEhRK5Block
    virtual void getFaceFlip(unsigned char, Block const&)const; // _ZNK25FaceDirectionalActorBlock11getFaceFlipEhRK5Block
    FaceDirectionalActorBlock(std::string const&, int, Material const&, bool, float); // _ZN25FaceDirectionalActorBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Materialbf
};
