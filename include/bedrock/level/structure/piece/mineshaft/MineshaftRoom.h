#pragma once

#include "../../../../util/Random.h"
#include "../MineshaftPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include <vector>
#include <memory>
#include "../../../../../unmapped/MineshaftData.h"
#include "../../../../../unmapped/BoundingBox.h"
#include "../StructurePiece.h"


class MineshaftRoom : MineshaftPiece {

public:
    ~MineshaftRoom();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void moveBoundingBox(int, int, int);
    virtual void getType()const;
    MineshaftRoom(MineshaftData &, int, Random &, int, int);
    MineshaftRoom(MineshaftData &);
};
