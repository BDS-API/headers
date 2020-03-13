#pragma once

#include "StructureStart.h"


class PillagerOutpostStart : StructureStart {

public:
    ~PillagerOutpostStart(); // _ZN20PillagerOutpostStartD2Ev
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&); // _ZN20PillagerOutpostStart11postProcessEP11BlockSourceR6RandomRK11BoundingBox
    virtual void getType()const; // _ZNK20PillagerOutpostStart7getTypeEv
    PillagerOutpostStart(); // _ZN20PillagerOutpostStartC2Ev
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&); // _ZN20PillagerOutpostStart21_fillWithSupportBlockERK8BlockPosP11BlockSourceRK11BoundingBoxRK5Block
    PillagerOutpostStart(Dimension &, Random &, int, int); // _ZN20PillagerOutpostStartC2ER9DimensionR6Randomii
    void createOutpost(Dimension &, Random &, int, int); // _ZN20PillagerOutpostStart13createOutpostER9DimensionR6Randomii
};
