#pragma once

#include <string>
#include "ActorBlock.h"


class FaceDirectionalActorBlock : ActorBlock {

public:
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;
    ~FaceDirectionalActorBlock();
    virtual void getMappedFace(unsigned char, Block const&)const;
    FaceDirectionalActorBlock(std::string const&, int, Material const&, bool, float);
};
