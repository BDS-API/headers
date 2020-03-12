#pragma once

#include "StructurePiece.h"


class ShipwreckPiece : StructurePiece {

public:
    static std::string STRUCTURE_SHIPWRECK_TYPES;

    virtual void getType()const;
    ~ShipwreckPiece();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ShipwreckPiece(int, int, bool);
};
