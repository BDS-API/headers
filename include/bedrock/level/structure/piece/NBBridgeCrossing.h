#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBBridgeCrossing : NetherFortressPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void addChildren(StructurePiece *, std::vector<std::unique_ptr<StructurePiece>> &, Random &);
    ~NBBridgeCrossing();
    virtual void getType()const;
    NBBridgeCrossing(int, BoundingBox const&, int);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBBridgeCrossing();
    NBBridgeCrossing(Random &, int, int);
};
