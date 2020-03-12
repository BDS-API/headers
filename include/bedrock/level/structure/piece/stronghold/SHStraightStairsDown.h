#pragma once

#include "../../../../util/Random.h"
#include "../StrongholdPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include <vector>
#include <memory>
#include "../../../../../unmapped/BoundingBox.h"
#include "../StructurePiece.h"


class SHStraightStairsDown : StrongholdPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~SHStraightStairsDown();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void getType()const;
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    SHStraightStairsDown();
    SHStraightStairsDown(int, Random &, BoundingBox const&, int);
};
