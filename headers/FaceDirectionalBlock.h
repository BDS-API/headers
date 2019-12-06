#pragma once

class FaceDirectionalBlock : BlockLegacy {

public:
    virtual ~FaceDirectionalBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;
    virtual void getFaceFlip(unsigned char, Block const&)const;

    void FaceDirectionalBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&, bool, float);
    void getMappedFaceStatic(unsigned char, Block const&, bool);
    void getFaceFlipStatic(unsigned char, Block const&, bool);
    void getFacingDirection(Block const&, bool);
};
