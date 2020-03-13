#pragma once

#include "StructurePiece.h"


class BuriedTreasurePiece : StructurePiece {

public:
    ~BuriedTreasurePiece(); // _ZN19BuriedTreasurePieceD2Ev
    virtual void getType()const; // _ZNK19BuriedTreasurePiece7getTypeEv
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN19BuriedTreasurePiece11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    BuriedTreasurePiece(int, int); // _ZN19BuriedTreasurePieceC2Eii
    void _buryChest(BlockSource &, Random &, BlockPos &)const; // _ZNK19BuriedTreasurePiece10_buryChestER11BlockSourceR6RandomR8BlockPos
    void _isCovered(BlockSource const&, BlockPos const&)const; // _ZNK19BuriedTreasurePiece10_isCoveredERK11BlockSourceRK8BlockPos
};
