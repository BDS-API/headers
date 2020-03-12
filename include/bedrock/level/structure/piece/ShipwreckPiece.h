#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include <string>
#include "StructurePiece.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"


class ShipwreckPiece : StructurePiece {

public:
    static std::string STRUCTURE_SHIPWRECK_TYPES;

    ~ShipwreckPiece();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;
    ShipwreckPiece(int, int, bool);
};
