#pragma once

#include <vector>
#include "../StrongholdPiece.h"


class SHLeftTurn : StrongholdPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    ~SHLeftTurn();
    virtual void getType()const;
    SHLeftTurn(int, Random &, BoundingBox const&, int);
    SHLeftTurn();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
