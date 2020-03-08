#pragma once

#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/Block"


class PillagerOutpostStart : StructureStart {

public:
    PillagerOutpostStart::~PillagerOutpostStart()
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;

    PillagerOutpostStart(void);
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&);
    PillagerOutpostStart(Dimension &, Random &, int, int);
    void createOutpost(Dimension &, Random &, int, int);
};
