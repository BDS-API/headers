#pragma once

#include "StructurePiece.h"


class ShipwreckPiece : public StructurePiece {

public:
    static std::string STRUCTURE_SHIPWRECK_TYPES;

    virtual ~ShipwreckPiece(); // _ZN14ShipwreckPieceD2Ev
    virtual void __fake_function0(); // fake
    virtual void getType()const; // _ZNK14ShipwreckPiece7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN14ShipwreckPiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    ShipwreckPiece(int, int, bool); // _ZN14ShipwreckPieceC2Eiib
};
