#pragma once

#include "../../../../unmapped/Block.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/Dimension.h"
#include "./StructureStart.h"
#include "../../../util/Random.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/BoundingBox.h"


class PillagerOutpostStart : StructureStart {

public:
    virtual ~PillagerOutpostStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;

    PillagerOutpostStart();
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&);
    PillagerOutpostStart(Dimension &, Random &, int, int);
    void createOutpost(Dimension &, Random &, int, int);
};
