#pragma once

#include "../../../block/unmapped/BlockSource.h"
#include "../../../../unmapped/Dimension.h"
#include "../../chunksource/OverworldGenerator.h"
#include "../../../../unmapped/Block.h"
#include "../../../../unmapped/BoundingBox.h"
#include "../../../util/Random.h"
#include "StructureStart.h"
#include "../../../util/BlockPos.h"
#include "../../chunksource/ChunkSource.h"


class WoodlandMansionStart : StructureStart {

public:
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~WoodlandMansionStart();
    virtual void getType()const;
    void _convertToStairsDirection(unsigned char)const;
    void _create(Dimension &, OverworldGenerator &, Random &, int, int);
    void _makeStairs(BlockPos const&, Block const&, unsigned char, unsigned char, BlockSource *, BoundingBox const&);
    WoodlandMansionStart(Dimension &, OverworldGenerator &, Random &, int, int);
    void createFromSlashCommand(Dimension &, ChunkSource &, Random &, BlockPos const&);
    void _fillCobblestone(BlockPos const&, BlockSource *, BoundingBox const&);
    WoodlandMansionStart();
};
