#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBCastleCorridorTBalconyPiece : NetherFortressPiece {

public:
    ~NBCastleCorridorTBalconyPiece();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBCastleCorridorTBalconyPiece();
    NBCastleCorridorTBalconyPiece(int, BoundingBox const&, int);
};
