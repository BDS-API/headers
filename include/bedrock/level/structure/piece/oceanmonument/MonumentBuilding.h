#pragma once

#include "../../../../util/Random.h"
#include "../../../../../unmapped/BoundingBox.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../OceanMonumentPiece.h"


class MonumentBuilding : OceanMonumentPiece {

public:
    ~MonumentBuilding();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    void generateUpperWall(BlockSource *, Random &, BoundingBox const&);
    void generateRoofPiece(BlockSource *, Random &, BoundingBox const&);
    void generateEntranceWall(BlockSource *, Random &, BoundingBox const&);
    void generateRoomGraph(Random &);
    void generateLowerWall(BlockSource *, Random &, BoundingBox const&);
    MonumentBuilding(Random &, int, int, int &);
    void generateMiddleWall(BlockSource *, Random &, BoundingBox const&);
    void generateWing(bool, int, BlockSource *, Random &, BoundingBox const&);
    void generateEntranceArchs(BlockSource *, Random &, BoundingBox const&);
    void getBiomeRange();
    MonumentBuilding();
};
