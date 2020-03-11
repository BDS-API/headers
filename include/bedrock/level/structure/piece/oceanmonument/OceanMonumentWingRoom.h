#pragma once

#include "../../../../block/unmapped/BlockSource.h"
#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"
#include "../../../../util/Random.h"


class OceanMonumentWingRoom : OceanMonumentPiece {

public:
    virtual ~OceanMonumentWingRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentWingRoom();
    OceanMonumentWingRoom(int &, BoundingBox &, int, bool);
};
