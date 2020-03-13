#pragma once

#include <string>
#include "BlockLegacy.h"


class FaceDirectionalBlock : BlockLegacy {

public:
    ~FaceDirectionalBlock(); // _ZN20FaceDirectionalBlockD2Ev
    virtual bool isValidAuxValue(int)const; // _ZNK20FaceDirectionalBlock15isValidAuxValueEi
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const; // _ZNK20FaceDirectionalBlock17getPlacementBlockER5ActorRK8BlockPoshRK4Vec3i
    virtual void getMappedFace(unsigned char, Block const&)const; // _ZNK20FaceDirectionalBlock13getMappedFaceEhRK5Block
    virtual void getFaceFlip(unsigned char, Block const&)const; // _ZNK20FaceDirectionalBlock11getFaceFlipEhRK5Block
    FaceDirectionalBlock(std::string const&, int, Material const&, bool, float); // _ZN20FaceDirectionalBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEiRK8Materialbf
    void getMappedFaceStatic(unsigned char, Block const&, bool); // _ZN20FaceDirectionalBlock19getMappedFaceStaticEhRK5Blockb
    void getFaceFlipStatic(unsigned char, Block const&, bool); // _ZN20FaceDirectionalBlock17getFaceFlipStaticEhRK5Blockb
    void getFacingDirection(Block const&, bool); // _ZN20FaceDirectionalBlock18getFacingDirectionERK5Blockb
};
