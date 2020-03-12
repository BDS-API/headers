#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBStairsRoom : NetherFortressPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    ~NBStairsRoom();
    virtual void getType()const;
    NBStairsRoom(int, BoundingBox const&, int);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBStairsRoom();
};
