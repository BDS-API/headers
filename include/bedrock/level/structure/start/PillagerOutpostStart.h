#pragma once

#include "../../../util/Random"
#include "../../../block/unmapped/BlockSource"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"
#include "../../../../unmapped/Block"
#include "../../../../unmapped/BoundingBox"


class PillagerOutpostStart : StructureStart {

public:
    virtual PillagerOutpostStart::~PillagerOutpostStart()
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;

    PillagerOutpostStart(void);
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&);
    PillagerOutpostStart(Dimension &, Random &, int, int);
    void createOutpost(Dimension &, Random &, int, int);
};
