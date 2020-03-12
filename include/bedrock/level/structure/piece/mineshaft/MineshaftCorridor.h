#pragma once

#include "../../../../util/Random.h"
#include "../MineshaftPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include <vector>
#include <memory>
#include "../../../../../unmapped/MineshaftData.h"
#include "../../../../../unmapped/BoundingBox.h"
#include "../StructurePiece.h"


class MineshaftCorridor : MineshaftPiece {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~MineshaftCorridor();
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    void _placeSupport(BlockSource *, BoundingBox const&, int, int, int, int, int, Random &);
    MineshaftCorridor(MineshaftData &);
    void _placeCobWeb(BlockSource *, BoundingBox const&, Random &, float, int, int, int);
    void findCorridorSize(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int);
    MineshaftCorridor(MineshaftData &, int, Random &, BoundingBox const&, int);
};
