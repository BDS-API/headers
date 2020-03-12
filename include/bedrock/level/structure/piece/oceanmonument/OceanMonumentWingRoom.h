#pragma once

#include "../OceanMonumentPiece.h"


class OceanMonumentWingRoom : OceanMonumentPiece {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~OceanMonumentWingRoom();
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    OceanMonumentWingRoom(int &, BoundingBox &, int, bool);
    OceanMonumentWingRoom();
};
