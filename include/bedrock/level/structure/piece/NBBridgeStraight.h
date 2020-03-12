#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBBridgeStraight : NetherFortressPiece {

public:
    virtual void getType()const;
    ~NBBridgeStraight();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBBridgeStraight(int, BoundingBox const&, int);
    NBBridgeStraight();
};
