#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../../../unmapped/Block.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "StructureStart.h"
#include "../../../util/BlockPos.h"


class PillagerOutpostStart : StructureStart {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~PillagerOutpostStart();
    PillagerOutpostStart(Dimension &, Random &, int, int);
    PillagerOutpostStart();
    void createOutpost(Dimension &, Random &, int, int);
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&);
};
