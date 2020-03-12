#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "StructurePiece.h"
#include "../../../../unmapped/Block.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../definition/RoomDefinition.h"
#include "../../../util/Random.h"
#include <memory>
#include "../../LevelChunk.h"


class OceanMonumentPiece : StructurePiece {

public:
    static long mLeftWingIndex;
    static long mRightWingIndex;
    static long mPenthouseIndex;
    static long mGridroomSourceIndex;
    static long mGridroomTopConnectIndex;
    static long mGridroomLeftWingConnectIndex;
    static long mGridroomRightWingConnectIndex;

    virtual void getWorldX(int, int);
    ~OceanMonumentPiece();
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void getWorldZ(int, int);
    OceanMonumentPiece(int);
    OceanMonumentPiece();
    void chunkIntersects(BoundingBox const&, int, int, int, int);
    OceanMonumentPiece(int &, BoundingBox &);
    void getRoomIndex(int, int, int);
    void generateWaterBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, bool);
    void generateDefaultFloor(BlockSource *, BoundingBox const&, int, int, bool);
    void getGridSize();
    OceanMonumentPiece(int, int &, std::shared_ptr<RoomDefinition> &, int, int, int);
    void generateBoxOnFillOnly(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&);
    void spawnElder(BlockSource *, BoundingBox const&, int, int, int);
};
