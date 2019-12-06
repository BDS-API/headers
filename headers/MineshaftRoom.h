#pragma once

class MineshaftRoom : MineshaftPiece {

public:
    virtual ~MineshaftRoom();
    virtual void moveBoundingBox(int, int, int);
    virtual void getType(void)const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void MineshaftRoom(MineshaftData &);
    void MineshaftRoom(MineshaftData &, int, Random &, int, int);
};
