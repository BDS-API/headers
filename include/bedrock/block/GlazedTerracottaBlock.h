#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "FaceDirectionalBlock.h"
#include "../util/Vec3.h"


class GlazedTerracottaBlock : FaceDirectionalBlock {

public:
    virtual bool isValidAuxValue(int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    ~GlazedTerracottaBlock();
    GlazedTerracottaBlock(std::string const&, int);
};
