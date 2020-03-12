#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHChestCorridor : StrongholdPiece {

public:
    virtual void getType()const;
    ~SHChestCorridor();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    SHChestCorridor(int, Random &, BoundingBox const&, int);
    SHChestCorridor();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
