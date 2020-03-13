#pragma once

#include "../OceanMonumentPiece.h"


class MonumentBuilding : OceanMonumentPiece {

public:
    ~MonumentBuilding(); // _ZN16MonumentBuildingD2Ev
    virtual void getType()const; // _ZNK16MonumentBuilding7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN16MonumentBuilding11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN16MonumentBuilding17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
    void getBiomeRange(); // _ZN16MonumentBuilding13getBiomeRangeEv
    MonumentBuilding(Random &, int, int, int &); // _ZN16MonumentBuildingC2ER6RandomiiRi
    void generateRoomGraph(Random &); // _ZN16MonumentBuilding17generateRoomGraphER6Random
    MonumentBuilding(); // _ZN16MonumentBuildingC2Ev
    void generateWing(bool, int, BlockSource *, Random &, BoundingBox const&); // _ZN16MonumentBuilding12generateWingEbiP11BlockSourceR6RandomRK11BoundingBox
    void generateEntranceArchs(BlockSource *, Random &, BoundingBox const&); // _ZN16MonumentBuilding21generateEntranceArchsEP11BlockSourceR6RandomRK11BoundingBox
    void generateEntranceWall(BlockSource *, Random &, BoundingBox const&); // _ZN16MonumentBuilding20generateEntranceWallEP11BlockSourceR6RandomRK11BoundingBox
    void generateRoofPiece(BlockSource *, Random &, BoundingBox const&); // _ZN16MonumentBuilding17generateRoofPieceEP11BlockSourceR6RandomRK11BoundingBox
    void generateLowerWall(BlockSource *, Random &, BoundingBox const&); // _ZN16MonumentBuilding17generateLowerWallEP11BlockSourceR6RandomRK11BoundingBox
    void generateMiddleWall(BlockSource *, Random &, BoundingBox const&); // _ZN16MonumentBuilding18generateMiddleWallEP11BlockSourceR6RandomRK11BoundingBox
    void generateUpperWall(BlockSource *, Random &, BoundingBox const&); // _ZN16MonumentBuilding17generateUpperWallEP11BlockSourceR6RandomRK11BoundingBox
};
