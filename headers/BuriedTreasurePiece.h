#pragma once

class BuriedTreasurePiece : StructurePiece {

public:
    virtual ~BuriedTreasurePiece();
    virtual void getType(void)const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);

    void BuriedTreasurePiece(int, int);
    void _buryChest(BlockSource &, Random &, BlockPos &)const;
    void _isCovered(BlockSource const&, BlockPos const&)const;
};
