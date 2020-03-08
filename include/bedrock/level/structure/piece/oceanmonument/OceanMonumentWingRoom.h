#pragma once

#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"


class OceanMonumentWingRoom : OceanMonumentPiece {

public:
    OceanMonumentWingRoom::~OceanMonumentWingRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentWingRoom(void);
    OceanMonumentWingRoom(int &, BoundingBox &, int, bool);
};
