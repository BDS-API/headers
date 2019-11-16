#pragma once

class VillagePiece : PoolElementStructurePiece {

    virtual void ~VillagePiece();
    virtual void ~VillagePiece();
    virtual void moveBoundingBox(int, int, int);
    virtual void asPoolElement(void);
    virtual void StructurePiece::getType(void)const;
    virtual void StructurePiece::addChildren(StructurePiece*, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void StructurePiece::getWorldX(int, int);
    virtual void StructurePiece::getWorldZ(int, int);
    virtual void StructurePiece::placeBlock(BlockSource *, Block const&, int, int, int, BoundingBox const&);
    virtual void StructurePiece::generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, Block const&, bool);
    virtual void StructurePiece::addHardcodedSpawnAreas(LevelChunk &)const;
}
