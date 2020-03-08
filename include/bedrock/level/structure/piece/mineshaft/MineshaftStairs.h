#pragma once

#include "../../../../../unmapped/MineshaftData"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../util/Random"
#include "../MineshaftPiece"
#include "../../../../block/unmapped/BlockSource"
#include "../StructurePiece"


class MineshaftStairs : MineshaftPiece {

public:
    MineshaftStairs::~MineshaftStairs()
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void findStairs(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int);
    MineshaftStairs(MineshaftData &);
    MineshaftStairs(MineshaftData &, int, BoundingBox const&, int);
};
