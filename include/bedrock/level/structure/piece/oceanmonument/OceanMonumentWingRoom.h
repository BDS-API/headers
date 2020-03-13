#pragma once

#include "../OceanMonumentPiece.h"


class OceanMonumentWingRoom : OceanMonumentPiece {

public:
    ~OceanMonumentWingRoom(); // _ZN21OceanMonumentWingRoomD2Ev
    virtual void getType()const; // _ZNK21OceanMonumentWingRoom7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN21OceanMonumentWingRoom11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN21OceanMonumentWingRoom17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
    OceanMonumentWingRoom(); // _ZN21OceanMonumentWingRoomC2Ev
    OceanMonumentWingRoom(int &, BoundingBox &, int, bool); // _ZN21OceanMonumentWingRoomC2ERiR11BoundingBoxib
};
