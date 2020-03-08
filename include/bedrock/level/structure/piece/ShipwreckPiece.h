#pragma once

#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"


class ShipwreckPiece : StructurePiece {

public:
    static long STRUCTURE_SHIPWRECK_TYPES[abi:cxx11];

    ShipwreckPiece::~ShipwreckPiece()
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    ShipwreckPiece(int, int, bool);
};
