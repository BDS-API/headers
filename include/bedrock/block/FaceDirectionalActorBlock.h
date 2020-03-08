#pragma once

#include "../actor/Actor"
#include "../../unmapped/Material"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../util/Vec3"


class FaceDirectionalActorBlock : ActorBlock {

public:
    virtual FaceDirectionalActorBlock::~FaceDirectionalActorBlock()
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    FaceDirectionalActorBlock(std::string const&, int, Material const&, bool, float);
};
