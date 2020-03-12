#pragma once

#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"


class FaceDirectionalBlock : BlockLegacy {

public:
    ~FaceDirectionalBlock();
    virtual void getFaceFlip(unsigned char, Block const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    FaceDirectionalBlock(std::string const&, int, Material const&, bool, float);
    void getFaceFlipStatic(unsigned char, Block const&, bool);
    void getMappedFaceStatic(unsigned char, Block const&, bool);
    void getFacingDirection(Block const&, bool);
};
