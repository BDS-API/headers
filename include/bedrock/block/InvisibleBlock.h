#pragma once

class InvisibleBlock : BlockLegacy {

public:
    virtual InvisibleBlock::~InvisibleBlock();
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;

    InvisibleBlock(std::string const&, int, Material const&);
};
