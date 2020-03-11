#pragma once

#include "unmapped/BlockSource.h"
#include "../../unmapped/Material.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../util/Vec3.h"
#include <string>


class InvisibleBlock : BlockLegacy {

public:
    virtual ~InvisibleBlock();
    virtual void clip(BlockSource &, BlockPos const&, Vec3 const&, Vec3 const&, bool)const;

    InvisibleBlock(std::string const&, int, Material const&);
};
