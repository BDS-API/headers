#pragma once

class PoolElementStructurePiece : StructurePiece {

    virtual void PoolElement~PoolElementStructurePiece();
    virtual void PoolElement~PoolElementStructurePiece();
    virtual void PoolElementmoveBoundingBox(int, int, int);
    virtual void PoolElementasPoolElement(void);
    virtual void getType(void)const;
    virtual void addChildren(StructurePiece*, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void PoolElementpostProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void PoolElementpostProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void getWorldX(int, int);
    virtual void getWorldZ(int, int);
    virtual void placeBlock(BlockSource *, Block const&, int, int, int, BoundingBox const&);
    virtual void generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, Block const&, bool);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
}
