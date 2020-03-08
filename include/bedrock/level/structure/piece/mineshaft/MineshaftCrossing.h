#pragma once

#include "../../../../util/Random"
#include "../../../../block/unmapped/BlockSource"
#include "../StructurePiece"
#include "../MineshaftPiece"
#include "../../../../../unmapped/BoundingBox"
#include "../../../../../unmapped/MineshaftData"


class MineshaftCrossing : MineshaftPiece {

public:
    virtual MineshaftCrossing::~MineshaftCrossing()
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void findCrossing(std::vector<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>, std::allocator<std::unique_ptr<StructurePiece, std::default_delete<StructurePiece>>>> &, Random &, int, int, int, int);
    MineshaftCrossing(MineshaftData &);
    MineshaftCrossing(MineshaftData &, int, BoundingBox const&, int);
    void _placeSupportPillar(BlockSource *, BoundingBox const&, int, int, int, int);
};
