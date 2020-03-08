#pragma once

#include "../../../../../unmapped/BlockSource"
#include "../../../../../unmapped/Random"
#include "../StrongholdPiece"
#include "../StructurePiece"


class SHStraightStairsDown : StrongholdPiece {

public:
    virtual SHStraightStairsDown::~SHStraightStairsDown();
    virtual void getType(void)const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    SHStraightStairsDown(void);
    SHStraightStairsDown(int, Random &, BoundingBox const&, int);
};
