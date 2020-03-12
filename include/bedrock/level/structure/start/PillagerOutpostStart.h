#pragma once

#include "StructureStart.h"


class PillagerOutpostStart : StructureStart {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~PillagerOutpostStart();
    PillagerOutpostStart();
    void createOutpost(Dimension &, Random &, int, int);
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&);
    PillagerOutpostStart(Dimension &, Random &, int, int);
};
