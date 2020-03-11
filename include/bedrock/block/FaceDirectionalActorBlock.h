#pragma once

#include <string>
#include "../../unmapped/Material.h"
#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include "../util/Vec3.h"
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"


class FaceDirectionalActorBlock : ActorBlock {

public:
    virtual ~FaceDirectionalActorBlock();
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    FaceDirectionalActorBlock(std::string const&, int, Material const&, bool, float);
};
