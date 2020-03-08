#pragma once

#include "../../../../../unmapped/BlockSource"
#include "../../../../../unmapped/Random"
#include "../StrongholdPiece"
#include "../StructurePiece"


class SHStairsDown : StrongholdPiece {

public:
    virtual SHStairsDown::~SHStairsDown();
    virtual void getType(void)const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    SHStairsDown(void);
    SHStairsDown(int, Random &, BoundingBox const&, int);
    SHStairsDown(int, Random &, int, int);
};
