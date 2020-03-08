#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../LevelChunk"
#include "../../../../unmapped/Block"
#include "../../../../unmapped/BoundingBox"
#include "../../../definition/RoomDefinition"


class OceanMonumentPiece : StructurePiece {

public:
    static long mLeftWingIndex;
    static long mRightWingIndex;
    static long mPenthouseIndex;
    static long mGridroomSourceIndex;
    static long mGridroomTopConnectIndex;
    static long mGridroomLeftWingConnectIndex;
    static long mGridroomRightWingConnectIndex;

    virtual OceanMonumentPiece::~OceanMonumentPiece()
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void getWorldX(int, int);
    virtual void getWorldZ(int, int);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;

    OceanMonumentPiece(void);
    OceanMonumentPiece(int);
    OceanMonumentPiece(int &, BoundingBox &);
    OceanMonumentPiece(int, int &, std::shared_ptr<RoomDefinition> &, int, int, int);
    void generateWaterBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, bool);
    void generateDefaultFloor(BlockSource *, BoundingBox const&, int, int, bool);
    void generateBoxOnFillOnly(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&);
    void spawnElder(BlockSource *, BoundingBox const&, int, int, int);
    void chunkIntersects(BoundingBox const&, int, int, int, int);
    void getRoomIndex(int, int, int);
    void getGridSize();
};
