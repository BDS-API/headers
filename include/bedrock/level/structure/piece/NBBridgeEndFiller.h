#pragma once

#include <vector>
#include "NetherFortressPiece.h"


class NBBridgeEndFiller : NetherFortressPiece {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    ~NBBridgeEndFiller();
    NBBridgeEndFiller(int, Random &, BoundingBox const&, int);
    void createPiece(std::vector<std::unique_ptr<StructurePiece>> &, Random &, int, int, int, int, int);
    NBBridgeEndFiller();
};
