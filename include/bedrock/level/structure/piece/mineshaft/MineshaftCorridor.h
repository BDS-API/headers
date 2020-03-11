#pragma once

#include "../../../../../unmapped/BoundingBox.h"
#include "../../../../../unmapped/MineshaftData.h"
#include "../../../../util/Random.h"
#include <memory>
#include "../MineshaftPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../StructurePiece.h"
#include <vector>


class MineshaftCorridor : MineshaftPiece {

public:
    virtual ~MineshaftCorridor();
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);

    void findCorridorSize(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int);
    MineshaftCorridor(MineshaftData &);
    MineshaftCorridor(MineshaftData &, int, Random &, BoundingBox const&, int);
    void _placeCobWeb(BlockSource *, BoundingBox const&, Random &, float, int, int, int);
    void _placeSupport(BlockSource *, BoundingBox const&, int, int, int, int, int, Random &);
};
