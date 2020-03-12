#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBCastleStalkRoom : NetherFortressPiece {

public:
    ~NBCastleStalkRoom();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    NBCastleStalkRoom(int, BoundingBox const&, int);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBCastleStalkRoom();
};
