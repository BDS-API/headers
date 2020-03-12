#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHRightTurn : StrongholdPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~SHRightTurn();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void getType()const;
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    SHRightTurn();
    SHRightTurn(int, Random &, BoundingBox const&, int);
};
