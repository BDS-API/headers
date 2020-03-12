#pragma once

#include <string>
#include "FaceDirectionalBlock.h"


class GlazedTerracottaBlock : FaceDirectionalBlock {

public:
    virtual bool isValidAuxValue(int)const;
    ~GlazedTerracottaBlock();
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;
    GlazedTerracottaBlock(std::string const&, int);
};
