#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHStairsDown : StrongholdPiece {

public:
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void getType()const;
    ~SHStairsDown();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    SHStairsDown(int, Random &, int, int);
    SHStairsDown(int, Random &, BoundingBox const&, int);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    SHStairsDown();
};
