#pragma once

#include "../../../../unmapped/BlockPos"
#include "../../../../unmapped/BlockSource"
#include "../../../../unmapped/Dimension"


class PillagerOutpostStart : StructureStart {

public:
    virtual PillagerOutpostStart::~PillagerOutpostStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType(void)const;

    PillagerOutpostStart(void);
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&);
    PillagerOutpostStart(Dimension &, Random &, int, int);
    void createOutpost(Dimension &, Random &, int, int);
};
