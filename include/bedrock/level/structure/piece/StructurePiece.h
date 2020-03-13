#pragma once

#include <vector>


class StructurePiece {

public:
    ~StructurePiece(); // _ZN14StructurePieceD2Ev
    virtual void moveBoundingBox(int, int, int); // _ZN14StructurePiece15moveBoundingBoxEiii
    virtual bool asPoolElement(); // _ZN14StructurePiece13asPoolElementEv
    virtual void getType()const; // _ZNK14StructurePiece7getTypeEv
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &); // _ZN14StructurePiece11addChildrenEPS_RSt6vectorISt10unique_ptrIS_St14default_deleteIS_EESaIS5_EER6Random
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&); // _ZN14StructurePiece17postProcessMobsAtEP11BlockSourceR6RandomRK11BoundingBox
    virtual void getWorldX(int, int); // _ZN14StructurePiece9getWorldXEii
    virtual void getWorldZ(int, int); // _ZN14StructurePiece9getWorldZEii
    virtual void placeBlock(BlockSource *, Block const&, int, int, int, BoundingBox const&); // _ZN14StructurePiece10placeBlockEP11BlockSourceRK5BlockiiiRK11BoundingBox
    virtual void generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, Block const&, bool); // _ZN14StructurePiece11generateBoxEP11BlockSourceRK11BoundingBoxiiiiiiRK5BlockS7_b
    virtual void addHardcodedSpawnAreas(LevelChunk &)const; // _ZNK14StructurePiece22addHardcodedSpawnAreasER10LevelChunk
    void getBoundingBox()const; // _ZNK14StructurePiece14getBoundingBoxEv
    void getGenDepth()const; // _ZNK14StructurePiece11getGenDepthEv
    StructurePiece(int); // _ZN14StructurePieceC2Ei
    StructurePiece(StructurePiece const&); // _ZN14StructurePieceC2ERKS_
    bool isInChunk(ChunkPos const&)const; // _ZNK14StructurePiece9isInChunkERK8ChunkPos
    bool isCloseToChunk(ChunkPos const&, int)const; // _ZNK14StructurePiece14isCloseToChunkERK8ChunkPosi
    void findCollisionPiece(std::vector<std::unique_ptr<StructurePiece>> const&, BoundingBox const&); // _ZN14StructurePiece18findCollisionPieceERKSt6vectorISt10unique_ptrIS_St14default_deleteIS_EESaIS4_EERK11BoundingBox
    void getLocatorPosition()const; // _ZNK14StructurePiece18getLocatorPositionEv
    bool edgesLiquid(BlockSource *, BoundingBox const&); // _ZN14StructurePiece11edgesLiquidEP11BlockSourceRK11BoundingBox
    void getWorldY(int); // _ZN14StructurePiece9getWorldYEi
    void getOrientationData(Block const*, unsigned short); // _ZN14StructurePiece18getOrientationDataEPK5Blockt
    void _getWorldPos(int, int, int); // _ZN14StructurePiece12_getWorldPosEiii
    bool isAir(BlockSource *, int, int, int, BoundingBox const&); // _ZN14StructurePiece5isAirEP11BlockSourceiiiRK11BoundingBox
    void getBlock(BlockSource *, int, int, int, BoundingBox const&); // _ZN14StructurePiece8getBlockEP11BlockSourceiiiRK11BoundingBox
    void generateAirBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int); // _ZN14StructurePiece14generateAirBoxEP11BlockSourceRK11BoundingBoxiiiiii
    void generateBox(BlockSource *, BoundingBox const&, BoundingBox const&, Block const&, Block const&, bool); // _ZN14StructurePiece11generateBoxEP11BlockSourceRK11BoundingBoxS4_RK5BlockS7_b
    void generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, bool, Random &, BlockSelector const&); // _ZN14StructurePiece11generateBoxEP11BlockSourceRK11BoundingBoxiiiiiibR6RandomRK13BlockSelector
    void generateBox(BlockSource *, BoundingBox const&, BoundingBox const&, bool, Random &, BlockSelector const&); // _ZN14StructurePiece11generateBoxEP11BlockSourceRK11BoundingBoxS4_bR6RandomRK13BlockSelector
    bool isAboveGround(int, int, int, BlockSource *); // _ZN14StructurePiece13isAboveGroundEiiiP11BlockSource
    void generateMaybeBox(BlockSource *, BoundingBox const&, Random &, float, int, int, int, int, int, int, Block const&, Block const&, bool, bool); // _ZN14StructurePiece16generateMaybeBoxEP11BlockSourceRK11BoundingBoxR6RandomfiiiiiiRK5BlockS9_bb
    void maybeGenerateBlock(BlockSource *, BoundingBox const&, Random &, float, int, int, int, Block const&); // _ZN14StructurePiece18maybeGenerateBlockEP11BlockSourceRK11BoundingBoxR6RandomfiiiRK5Block
    void generateUpperHalfSphere(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, bool); // _ZN14StructurePiece23generateUpperHalfSphereEP11BlockSourceRK11BoundingBoxiiiiiiRK5Blockb
    void generateAirColumnUp(BlockSource *, int, int, int, BoundingBox const&); // _ZN14StructurePiece19generateAirColumnUpEP11BlockSourceiiiRK11BoundingBox
    void getTotalWeight(std::vector<PieceWeight> const&); // _ZN14StructurePiece14getTotalWeightERKSt6vectorI11PieceWeightSaIS1_EE
    void setGenDepth(int); // _ZN14StructurePiece11setGenDepthEi
};
