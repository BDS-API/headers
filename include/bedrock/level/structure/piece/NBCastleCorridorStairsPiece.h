#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBCastleCorridorStairsPiece : NetherFortressPiece {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~NBCastleCorridorStairsPiece();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    NBCastleCorridorStairsPiece(int, BoundingBox const&, int);
    NBCastleCorridorStairsPiece();
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
};
