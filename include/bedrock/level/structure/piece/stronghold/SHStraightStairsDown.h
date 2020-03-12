#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHStraightStairsDown : StrongholdPiece {

public:
    virtual void getType()const;
    ~SHStraightStairsDown();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    SHStraightStairsDown();
    SHStraightStairsDown(int, Random &, BoundingBox const&, int);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
