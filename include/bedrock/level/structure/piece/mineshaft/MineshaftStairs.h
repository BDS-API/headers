#pragma once

#include "../../../../util/Random.h"
#include "../MineshaftPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include <vector>
#include <memory>
#include "../../../../../unmapped/MineshaftData.h"
#include "../../../../../unmapped/BoundingBox.h"
#include "../StructurePiece.h"


class MineshaftStairs : MineshaftPiece {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    ~MineshaftStairs();
    MineshaftStairs(MineshaftData &, int, BoundingBox const&, int);
    void findStairs(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int);
    MineshaftStairs(MineshaftData &);
};
