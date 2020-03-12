#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHFillerCorridor : StrongholdPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    ~SHFillerCorridor();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    void findPieceBox(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int);
    SHFillerCorridor();
    SHFillerCorridor(int, Random &, BoundingBox const&, int);
};
