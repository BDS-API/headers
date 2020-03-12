#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHFiveCrossing : StrongholdPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~SHFiveCrossing();
    virtual void getType()const;
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    SHFiveCrossing();
    SHFiveCrossing(int, Random &, BoundingBox const&, int);
};
