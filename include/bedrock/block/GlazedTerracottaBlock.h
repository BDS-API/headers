#pragma once

#include "unmapped/BlockSource.h"
#include "./FaceDirectionalBlock.h"
#include "../util/BlockPos.h"
#include "../util/Vec3.h"
#include "../actor/Actor.h"
#include <string>


class GlazedTerracottaBlock : FaceDirectionalBlock {

public:
    virtual ~GlazedTerracottaBlock();
    virtual bool isValidAuxValue(int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;

    GlazedTerracottaBlock(std::string const&, int);
};
