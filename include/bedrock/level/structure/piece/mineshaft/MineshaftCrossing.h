#pragma once

#include "../MineshaftPiece.h"
#include <vector>


class MineshaftCrossing : MineshaftPiece {

public:
    ~MineshaftCrossing();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    void _placeSupportPillar(BlockSource *, BoundingBox const&, int, int, int, int);
    MineshaftCrossing(MineshaftData &, int, BoundingBox const&, int);
    void findCrossing(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int);
    MineshaftCrossing(MineshaftData &);
};
