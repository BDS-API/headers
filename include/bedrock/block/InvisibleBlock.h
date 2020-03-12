#pragma once

#include <string>
#include "BlockLegacy.h"


class InvisibleBlock : BlockLegacy {

public:
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    ~InvisibleBlock();
    InvisibleBlock(std::string const&, int, Material const&);
};
