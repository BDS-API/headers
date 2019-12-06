#pragma once

class ShipwreckPiece : StructurePiece {

public:
    virtual ~ShipwreckPiece();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void ShipwreckPiece(int, int, bool);
};
