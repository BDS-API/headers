#pragma once

#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "../../unmapped/Material.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"


class FaceDirectionalActorBlock : ActorBlock {

public:
    ~FaceDirectionalActorBlock();
    virtual void getFaceFlip(unsigned char, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    FaceDirectionalActorBlock(std::string const&, int, Material const&, bool, float);
};
