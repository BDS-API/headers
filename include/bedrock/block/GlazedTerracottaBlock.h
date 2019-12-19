#pragma once

class GlazedTerracottaBlock : FaceDirectionalBlock {

public:
    virtual GlazedTerracottaBlock::~GlazedTerracottaBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;

    GlazedTerracottaBlock(std::string const&, int);
};
