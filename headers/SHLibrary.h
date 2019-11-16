#pragma once

class SHLibrary : StrongholdPiece {

    virtual void ~SHLibrary();
    virtual void ~SHLibrary();
    virtual void StructurePiece::moveBoundingBox(int, int, int);
    virtual void StructurePiece::asPoolElement(void);
    virtual void getType(void)const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void StructurePiece::postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void StructurePiece::getWorldX(int, int);
    virtual void StructurePiece::getWorldZ(int, int);
    virtual void StructurePiece::placeBlock(BlockSource *, Block const&, int, int, int, BoundingBox const&);
    virtual void StructurePiece::generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, Block const&, bool);
    virtual void StructurePiece::addHardcodedSpawnAreas(LevelChunk &)const;
}
