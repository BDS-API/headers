#pragma once

#include <vector>


class StructurePiece {

public:
    virtual bool asPoolElement();
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, Block const&, bool);
    virtual void getWorldZ(int, int);
    virtual void getType()const;
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
    virtual void getWorldX(int, int);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void moveBoundingBox(int, int, int);
    ~StructurePiece();
    virtual void placeBlock(BlockSource *, Block const&, int, int, int, BoundingBox const&);
    void getWorldY(int);
    void getBoundingBox()const;
    bool isAir(BlockSource *, int, int, int, BoundingBox const&);
    void _getWorldPos(int, int, int);
    void generateMaybeBox(BlockSource *, BoundingBox const&, Random &, float, int, int, int, int, int, int, Block const&, Block const&, bool, bool);
    void generateAirColumnUp(BlockSource *, int, int, int, BoundingBox const&);
    void generateAirBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int);
    bool isInChunk(ChunkPos const&)const;
    void maybeGenerateBlock(BlockSource *, BoundingBox const&, Random &, float, int, int, int, Block const&);
    void generateUpperHalfSphere(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, bool);
    StructurePiece(StructurePiece const&);
    bool isCloseToChunk(ChunkPos const&, int)const;
    void getOrientationData(Block const*, unsigned short);
    void getLocatorPosition()const;
    void generateBox(BlockSource *, BoundingBox const&, BoundingBox const&, Block const&, Block const&, bool);
    bool edgesLiquid(BlockSource *, BoundingBox const&);
    bool isAboveGround(int, int, int, BlockSource *);
    StructurePiece(int);
    void setGenDepth(int);
    void generateBox(BlockSource *, BoundingBox const&, BoundingBox const&, bool, Random &, BlockSelector const&);
    void generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, bool, Random &, BlockSelector const&);
    void getGenDepth()const;
    void getBlock(BlockSource *, int, int, int, BoundingBox const&);
    void findCollisionPiece(std::vector<std::unique_ptr<StructurePiece>> const&, BoundingBox const&);
    void getTotalWeight(std::vector<PieceWeight> const&);
};
