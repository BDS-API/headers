#pragma once

class RotatedPillarBlock : BlockLegacy {

public:
    static long RotatedPillarBlock::mRotatedX;
    static long RotatedPillarBlock::mRotatedZ;

    virtual ~RotatedPillarBlock();
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;

    void RotatedPillarBlock(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, int, Material const&);
};
