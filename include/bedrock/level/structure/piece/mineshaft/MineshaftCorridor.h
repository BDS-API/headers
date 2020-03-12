#pragma once

#include "../MineshaftPiece.h"
#include <vector>


class MineshaftCorridor : MineshaftPiece {

public:
    ~MineshaftCorridor();
    virtual void getType()const;
    virtual void postProcessMobsAt(BlockSource *, Random &, BoundingBox const&);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    MineshaftCorridor(MineshaftData &);
    MineshaftCorridor(MineshaftData &, int, Random &, BoundingBox const&, int);
    void _placeCobWeb(BlockSource *, BoundingBox const&, Random &, float, int, int, int);
    void findCorridorSize(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int);
    void _placeSupport(BlockSource *, BoundingBox const&, int, int, int, int, int, Random &);
};
