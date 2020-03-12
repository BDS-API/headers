#pragma once

#include "../../../../util/Random.h"
#include "../../../../../unmapped/BoundingBox.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../OceanMonumentPiece.h"


class OceanMonumentWingRoom : OceanMonumentPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentWingRoom();
    OceanMonumentWingRoom(int &, BoundingBox &, int, bool);
    OceanMonumentWingRoom();
};
