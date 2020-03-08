#pragma once

#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../../../../../unmapped/BoundingBox"


class OceanMonumentWingRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentWingRoom::~OceanMonumentWingRoom()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentWingRoom(void);
    OceanMonumentWingRoom(int &, BoundingBox &, int, bool);
};
