#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBCastleSmallCorridorRightTurnPiece : NetherFortressPiece {

public:
    ~NBCastleSmallCorridorRightTurnPiece();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBCastleSmallCorridorRightTurnPiece();
    NBCastleSmallCorridorRightTurnPiece(int, Random &, BoundingBox const&, int);
};
