#pragma once

#include "../../../../util/Random"
#include "../OceanMonumentPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../../../../../unmapped/BoundingBox"


class MonumentBuilding : OceanMonumentPiece {

public:
    virtual MonumentBuilding::~MonumentBuilding()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    void getBiomeRange();
    MonumentBuilding(Random &, int, int, int &);
    void generateRoomGraph(Random &);
    MonumentBuilding(void);
    void generateWing(bool, int, BlockSource *, Random &, BoundingBox const&);
    void generateEntranceArchs(BlockSource *, Random &, BoundingBox const&);
    void generateEntranceWall(BlockSource *, Random &, BoundingBox const&);
    void generateRoofPiece(BlockSource *, Random &, BoundingBox const&);
    void generateLowerWall(BlockSource *, Random &, BoundingBox const&);
    void generateMiddleWall(BlockSource *, Random &, BoundingBox const&);
    void generateUpperWall(BlockSource *, Random &, BoundingBox const&);
};
