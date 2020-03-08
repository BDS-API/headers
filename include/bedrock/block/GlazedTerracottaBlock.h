#pragma once

#include "../actor/Actor"
#include "../util/Vec3"
#include "../util/BlockPos"
#include "unmapped/BlockSource"


class GlazedTerracottaBlock : FaceDirectionalBlock {

public:
    GlazedTerracottaBlock::~GlazedTerracottaBlock()
    virtual bool isValidAuxValue(int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;

    GlazedTerracottaBlock(std::string const&, int);
};
