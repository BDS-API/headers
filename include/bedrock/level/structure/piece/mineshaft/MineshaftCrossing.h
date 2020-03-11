#pragma once

#include "../../../../../unmapped/BoundingBox.h"
#include "../../../../../unmapped/MineshaftData.h"
#include "../../../../util/Random.h"
#include <memory>
#include "../MineshaftPiece.h"
#include "../../../../block/unmapped/BlockSource.h"
#include "../StructurePiece.h"
#include <vector>


class MineshaftCrossing : MineshaftPiece {

public:
    virtual ~MineshaftCrossing();
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void findCrossing(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int);
    MineshaftCrossing(MineshaftData &);
    MineshaftCrossing(MineshaftData &, int, BoundingBox const&, int);
    void _placeSupportPillar(BlockSource *, BoundingBox const&, int, int, int, int);
};
