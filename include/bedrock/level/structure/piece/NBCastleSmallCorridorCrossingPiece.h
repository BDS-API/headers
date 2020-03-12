#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBCastleSmallCorridorCrossingPiece : NetherFortressPiece {

public:
    ~NBCastleSmallCorridorCrossingPiece();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBCastleSmallCorridorCrossingPiece(int, BoundingBox const&, int);
    NBCastleSmallCorridorCrossingPiece();
};
