#pragma once

#include <memory>
#include "StructurePiece.h"


class OceanMonumentPiece : StructurePiece {

public:
    static long mLeftWingIndex;
    static long mRightWingIndex;
    static long mPenthouseIndex;
    static long mGridroomSourceIndex;
    static long mGridroomTopConnectIndex;
    static long mGridroomLeftWingConnectIndex;
    static long mGridroomRightWingConnectIndex;

    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void getWorldX(int, int);
    ~OceanMonumentPiece();
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
    virtual void getWorldZ(int, int);
    void spawnElder(BlockSource *, BoundingBox const&, int, int, int);
    OceanMonumentPiece(int);
    void getGridSize();
    OceanMonumentPiece(int &, BoundingBox &);
    OceanMonumentPiece(int, int &, std::shared_ptr<RoomDefinition> &, int, int, int);
    void generateDefaultFloor(BlockSource *, BoundingBox const&, int, int, bool);
    void generateBoxOnFillOnly(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&);
    void generateWaterBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, bool);
    void chunkIntersects(BoundingBox const&, int, int, int, int);
    void getRoomIndex(int, int, int);
    OceanMonumentPiece();
};
