#pragma once

class RotatedPillarBlock : BlockLegacy {

public:
    static long RotatedPillarBlock::mRotatedX;
    static long RotatedPillarBlock::mRotatedZ;

    virtual ~RotatedPillarBlock();
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;

    void RotatedPillarBlock(std::string const&, int, Material const&);
};
