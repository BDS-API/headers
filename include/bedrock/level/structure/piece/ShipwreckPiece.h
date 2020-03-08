#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/BoundingBox"


class ShipwreckPiece : StructurePiece {

public:
    static long STRUCTURE_SHIPWRECK_TYPES[abi:cxx11];

    virtual ShipwreckPiece::~ShipwreckPiece()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    ShipwreckPiece(int, int, bool);
};
