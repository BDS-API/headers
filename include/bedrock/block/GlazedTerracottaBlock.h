#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../util/Vec3"


class GlazedTerracottaBlock : FaceDirectionalBlock {

public:
    virtual GlazedTerracottaBlock::~GlazedTerracottaBlock()
    virtual bool isValidAuxValue(int)const;
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMapColor(BlockSource &, BlockPos const&)const;

    GlazedTerracottaBlock(std::string const&, int);
};
