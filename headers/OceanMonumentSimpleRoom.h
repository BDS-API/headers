#pragma once

class OceanMonumentSimpleRoom : OceanMonumentPiece {

    virtual void ~OceanMonumentSimpleRoom();
    virtual void ~OceanMonumentSimpleRoom();
    virtual void StructurePiece::moveBoundingBox(int, int, int);
    virtual void StructurePiece::asPoolElement(void);
    virtual void getType(void)const;
    virtual void StructurePiece::addChildren(StructurePiece*, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void getWorldX(int, int);
    virtual void getWorldZ(int, int);
    virtual void StructurePiece::placeBlock(BlockSource *, Block const&, int, int, int, BoundingBox const&);
    virtual void StructurePiece::generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, Block const&, bool);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
}
