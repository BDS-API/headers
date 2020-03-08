#pragma once

#include "../OceanMonumentPiece"
#include "../../../../../unmapped/BlockSource"


class OceanMonumentWingRoom : OceanMonumentPiece {

public:
    virtual OceanMonumentWingRoom::~OceanMonumentWingRoom();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    OceanMonumentWingRoom(void);
    OceanMonumentWingRoom(int &, BoundingBox &, int, bool);
};
