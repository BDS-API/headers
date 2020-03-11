#pragma once

#include "../../../../unmapped/BoundingBox.h"
#include "../../../block/unmapped/BlockSource.h"
#include "./StructurePiece.h"
#include "../../../util/Random.h"


class ShipwreckPiece : StructurePiece {

public:
    static std::string STRUCTURE_SHIPWRECK_TYPES;

    virtual ~ShipwreckPiece();
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    ShipwreckPiece(int, int, bool);
};
