#pragma once

#include "../util/Vec3"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Material"


class InvisibleBlock : BlockLegacy {

public:
    InvisibleBlock::~InvisibleBlock()
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;

    InvisibleBlock(std::string const&, int, Material const&);
};
