#pragma once

#include <string>
#include "BlockLegacy.h"


class FaceDirectionalBlock : BlockLegacy {

public:
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    ~FaceDirectionalBlock();
    virtual void getFaceFlip(unsigned char, Block const&)const;
    virtual bool isValidAuxValue(int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    void getMappedFaceStatic(unsigned char, Block const&, bool);
    void getFaceFlipStatic(unsigned char, Block const&, bool);
    FaceDirectionalBlock(std::string const&, int, Material const&, bool, float);
    void getFacingDirection(Block const&, bool);
};
