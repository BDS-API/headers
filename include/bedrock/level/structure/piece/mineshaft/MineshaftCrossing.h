#pragma once

#include "../../../../util/Random.h"
#include "../MineshaftPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include <vector>
#include <memory>
#include "../../../../../unmapped/MineshaftData.h"
#include "../../../../../unmapped/BoundingBox.h"
#include "../StructurePiece.h"


class MineshaftCrossing : MineshaftPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    ~MineshaftCrossing();
    virtual void getType()const;
    void findCrossing(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int);
    MineshaftCrossing(MineshaftData &);
    MineshaftCrossing(MineshaftData &, int, BoundingBox const&, int);
    void _placeSupportPillar(BlockSource *, BoundingBox const&, int, int, int, int);
};
