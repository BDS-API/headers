#pragma once

#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Material.h"
#include "../util/Vec3.h"
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"


class RotatedPillarBlock : BlockLegacy {

public:
    static long mRotatedX;
    static long mRotatedZ;

    virtual void getMappedFace(unsigned char, Block const&)const;
    ~RotatedPillarBlock();
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    RotatedPillarBlock(std::string const&, int, Material const&);
};
