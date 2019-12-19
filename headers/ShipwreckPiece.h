#pragma once

class ShipwreckPiece : StructurePiece {

public:
    static long STRUCTURE_SHIPWRECK_TYPES[abi:cxx11];

    virtual ~ShipwreckPiece();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void ShipwreckPiece(int, int, bool);
};
