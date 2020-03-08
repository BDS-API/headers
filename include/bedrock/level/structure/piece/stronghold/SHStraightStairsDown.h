#pragma once

#include "../../../../util/Random"
#include "../../../../block/unmapped/BlockSource"
#include "../StructurePiece"
#include "../../../../../unmapped/BoundingBox"
#include "../StrongholdPiece"


class SHStraightStairsDown : StrongholdPiece {

public:
    virtual SHStraightStairsDown::~SHStraightStairsDown()
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void createPiece(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int, int);
    SHStraightStairsDown(void);
    SHStraightStairsDown(int, Random &, BoundingBox const&, int);
};
