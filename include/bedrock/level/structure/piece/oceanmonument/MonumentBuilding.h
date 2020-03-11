#pragma once

#include "../../../../block/unmapped/BlockSource.h"
#include "../../../../../unmapped/BoundingBox.h"
#include "../OceanMonumentPiece.h"
#include "../../../../util/Random.h"


class MonumentBuilding : OceanMonumentPiece {

public:
    virtual ~MonumentBuilding();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    void getBiomeRange();
    MonumentBuilding(Random &, int, int, int &);
    void generateRoomGraph(Random &);
    MonumentBuilding();
    void generateWing(bool, int, BlockSource *, Random &, BoundingBox const&);
    void generateEntranceArchs(BlockSource *, Random &, BoundingBox const&);
    void generateEntranceWall(BlockSource *, Random &, BoundingBox const&);
    void generateRoofPiece(BlockSource *, Random &, BoundingBox const&);
    void generateLowerWall(BlockSource *, Random &, BoundingBox const&);
    void generateMiddleWall(BlockSource *, Random &, BoundingBox const&);
    void generateUpperWall(BlockSource *, Random &, BoundingBox const&);
};
