#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBCastleSmallCorridorPiece : NetherFortressPiece {

public:
    ~NBCastleSmallCorridorPiece();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    NBCastleSmallCorridorPiece(int, BoundingBox const&, int);
    NBCastleSmallCorridorPiece();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
