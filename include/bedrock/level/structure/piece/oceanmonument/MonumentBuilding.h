#pragma once

#include "../OceanMonumentPiece.h"


class MonumentBuilding : OceanMonumentPiece {

public:
    virtual void getType()const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    ~MonumentBuilding();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    MonumentBuilding();
    void generateEntranceWall(BlockSource *, Random &, BoundingBox const&);
    void generateMiddleWall(BlockSource *, Random &, BoundingBox const&);
    void generateRoomGraph(Random &);
    void getBiomeRange();
    void generateUpperWall(BlockSource *, Random &, BoundingBox const&);
    void generateEntranceArchs(BlockSource *, Random &, BoundingBox const&);
    MonumentBuilding(Random &, int, int, int &);
    void generateRoofPiece(BlockSource *, Random &, BoundingBox const&);
    void generateLowerWall(BlockSource *, Random &, BoundingBox const&);
    void generateWing(bool, int, BlockSource *, Random &, BoundingBox const&);
};
