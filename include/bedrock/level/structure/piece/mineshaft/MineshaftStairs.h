#pragma once

#include "../MineshaftPiece.h"
#include <vector>


class MineshaftStairs : MineshaftPiece {

public:
    ~MineshaftStairs();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    void findStairs(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int);
    MineshaftStairs(MineshaftData &, int, BoundingBox const&, int);
    MineshaftStairs(MineshaftData &);
};
