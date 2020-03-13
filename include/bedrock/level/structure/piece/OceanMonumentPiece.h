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

    ~OceanMonumentPiece(); // _ZN18OceanMonumentPieceD2Ev
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN18OceanMonumentPiece17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
    virtual void getWorldX(int, int); // _ZN18OceanMonumentPiece9getWorldXEii
    virtual void getWorldZ(int, int); // _ZN18OceanMonumentPiece9getWorldZEii
    virtual void addHardcodedSpawnAreas(LevelChunk &)const; // _ZNK18OceanMonumentPiece22addHardcodedSpawnAreasER10LevelChunk
    OceanMonumentPiece(); // _ZN18OceanMonumentPieceC2Ev
    OceanMonumentPiece(int); // _ZN18OceanMonumentPieceC2Ei
    OceanMonumentPiece(int &, BoundingBox &); // _ZN18OceanMonumentPieceC2ERiR11BoundingBox
    OceanMonumentPiece(int, int &, std::shared_ptr<RoomDefinition> &, int, int, int); // _ZN18OceanMonumentPieceC2EiRiRSt10shared_ptrI14RoomDefinitionEiii
    void generateWaterBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, bool); // _ZN18OceanMonumentPiece16generateWaterBoxEP11BlockSourceRK11BoundingBoxiiiiiib
    void generateDefaultFloor(BlockSource *, BoundingBox const&, int, int, bool); // _ZN18OceanMonumentPiece20generateDefaultFloorEP11BlockSourceRK11BoundingBoxiib
    void generateBoxOnFillOnly(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&); // _ZN18OceanMonumentPiece21generateBoxOnFillOnlyEP11BlockSourceRK11BoundingBoxiiiiiiRK5Block
    void spawnElder(BlockSource *, BoundingBox const&, int, int, int); // _ZN18OceanMonumentPiece10spawnElderEP11BlockSourceRK11BoundingBoxiii
    void chunkIntersects(BoundingBox const&, int, int, int, int); // _ZN18OceanMonumentPiece15chunkIntersectsERK11BoundingBoxiiii
    void getRoomIndex(int, int, int); // _ZN18OceanMonumentPiece12getRoomIndexEiii
    void getGridSize(); // _ZN18OceanMonumentPiece11getGridSizeEv
};
