#pragma once

class StructurePiece {

public:
    virtual ~StructurePiece();
    virtual void moveBoundingBox(int, int, int);
    virtual void asPoolElement(void);
    virtual void getType(void)const;
    virtual void addChildren(StructurePiece*, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void getWorldX(int, int);
    virtual void getWorldZ(int, int);
    virtual void placeBlock(BlockSource *, Block const&, int, int, int, BoundingBox const&);
    virtual void generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, Block const&, bool);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;

    void getBoundingBox(void)const;
    void getGenDepth(void)const;
    void StructurePiece(int);
    void StructurePiece(StructurePiece const&);
    bool isInChunk(ChunkPos const&)const;
    bool isCloseToChunk(ChunkPos const&, int)const;
    void findCollisionPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> const&, BoundingBox const&);
    void getLocatorPosition(void)const;
    void edgesLiquid(BlockSource *, BoundingBox const&);
    void getWorldY(int);
    void getOrientationData(Block const*, unsigned short);
    void _getWorldPos(int, int, int);
    bool isAir(BlockSource *, int, int, int, BoundingBox const&);
    void getBlock(BlockSource *, int, int, int, BoundingBox const&);
    void generateAirBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int);
    void generateBox(BlockSource *, BoundingBox const&, BoundingBox const&, Block const&, Block const&, bool);
    void generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, bool, Random &, BlockSelector const&);
    void generateBox(BlockSource *, BoundingBox const&, BoundingBox const&, bool, Random &, BlockSelector const&);
    bool isAboveGround(int, int, int, BlockSource *);
    void generateMaybeBox(BlockSource *, BoundingBox const&, Random &, float, int, int, int, int, int, int, Block const&, Block const&, bool, bool);
    void maybeGenerateBlock(BlockSource *, BoundingBox const&, Random &, float, int, int, int, Block const&);
    void generateUpperHalfSphere(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, bool);
    void generateAirColumnUp(BlockSource *, int, int, int, BoundingBox const&);
    void getTotalWeight(std::vector<PieceWeight, std::allocator<PieceWeight>> const&);
    void setGenDepth(int);
};
