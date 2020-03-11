#pragma once

#include <string>
#include "../../unmapped/Material.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../util/Vec3.h"
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"


class FaceDirectionalBlock : BlockLegacy {

public:
    virtual ~FaceDirectionalBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    FaceDirectionalBlock(std::string const&, int, Material const&, bool, float);
    void getMappedFaceStatic(unsigned char, Block const&, bool);
    void getFaceFlipStatic(unsigned char, Block const&, bool);
    void getFacingDirection(Block const&, bool);
};
