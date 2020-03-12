#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBCastleSmallCorridorLeftTurnPiece : NetherFortressPiece {

public:
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~NBCastleSmallCorridorLeftTurnPiece();
    NBCastleSmallCorridorLeftTurnPiece(int, Random &, BoundingBox const&, int);
    NBCastleSmallCorridorLeftTurnPiece();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
