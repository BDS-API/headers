#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Material.h"
#include "../util/Vec3.h"
#include "BlockLegacy.h"


class InvisibleBlock : BlockLegacy {

public:
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;
    ~InvisibleBlock();
    InvisibleBlock(std::string const&, int, Material const&);
};
