#pragma once

#include "../../../../unmapped/Block.h"
#include "../../chunksource/OverworldGenerator.h"
#include "../../../util/BlockPos.h"
#include "../../../../unmapped/Dimension.h"
#include "./StructureStart.h"
#include "../../../util/Random.h"
#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../chunksource/ChunkSource.h"


class WoodlandMansionStart : StructureStart {

public:
    virtual ~WoodlandMansionStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;

    WoodlandMansionStart();
    WoodlandMansionStart(Dimension &, OverworldGenerator &, Random &, int, int);
    void _create(Dimension &, OverworldGenerator &, Random &, int, int);
    void _fillCobblestone(BlockPos const&, BlockSource *, BoundingBox const&);
    void _convertToStairsDirection(unsigned char)const;
    void _makeStairs(BlockPos const&, Block const&, unsigned char, unsigned char, BlockSource *, BoundingBox const&);
    void createFromSlashCommand(Dimension &, ChunkSource &, Random &, BlockPos const&);
};
