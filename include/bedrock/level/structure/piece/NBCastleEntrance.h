#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBCastleEntrance : NetherFortressPiece {

public:
    virtual void getType()const;
    ~NBCastleEntrance();
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    NBCastleEntrance(int, BoundingBox const&, int);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBCastleEntrance();
};
