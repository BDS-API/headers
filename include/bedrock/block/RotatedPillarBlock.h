#pragma once

#include <string>
#include "../../unmapped/Material.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../util/Vec3.h"
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"


class RotatedPillarBlock : BlockLegacy {

public:
    static long mRotatedX;
    static long mRotatedZ;

    virtual ~RotatedPillarBlock();
    virtual void getPlacementBlock(Actor &, BlockPos const&, unsigned char, Vec3 const&, int)const;
    virtual void getMappedFace(unsigned char, Block const&)const;

    RotatedPillarBlock(std::string const&, int, Material const&);
};
