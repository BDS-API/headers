#pragma once

class InvisibleBlock : BlockLegacy {

public:
    virtual ~InvisibleBlock();
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;

    void InvisibleBlock(std::string const&, int, Material const&);
};
