#pragma once

class NBMonsterThrone : NetherFortressPiece {

    virtual void ~NBMonsterThrone();
    virtual void ~NBMonsterThrone();
    virtual void StructurePiece::moveBoundingBox(int, int, int);
    virtual void StructurePiece::asPoolElement(void);
    virtual void getType(void)const;
    virtual void StructurePiece::addChildren(StructurePiece*, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void StructurePiece::postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void StructurePiece::getWorldX(int, int);
    virtual void StructurePiece::getWorldZ(int, int);
    virtual void StructurePiece::placeBlock(BlockSource *, Block const&, int, int, int, BoundingBox const&);
    virtual void StructurePiece::generateBox(BlockSource *, BoundingBox const&, int, int, int, int, int, int, Block const&, Block const&, bool);
    virtual void addHardcodedSpawnAreas(LevelChunk &)const;
}
