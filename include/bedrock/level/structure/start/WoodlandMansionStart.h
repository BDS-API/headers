#pragma once

#include "../../../../unmapped/Block"
#include "../../../../unmapped/BoundingBox"
#include "../../../util/Random"
#include "../../../../unmapped/Dimension"
#include "../../../util/BlockPos"
#include "../../../block/unmapped/BlockSource"
#include "../../chunksource/OverworldGenerator"
#include "../../chunksource/ChunkSource"


class WoodlandMansionStart : StructureStart {

public:
    WoodlandMansionStart::~WoodlandMansionStart()
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType()const;

    WoodlandMansionStart(void);
    WoodlandMansionStart(Dimension &, OverworldGenerator &, Random &, int, int);
    void _create(Dimension &, OverworldGenerator &, Random &, int, int);
    void _fillCobblestone(BlockPos const&, BlockSource *, BoundingBox const&);
    void _convertToStairsDirection(unsigned char)const;
    void _makeStairs(BlockPos const&, Block const&, unsigned char, unsigned char, BlockSource *, BoundingBox const&);
    void createFromSlashCommand(Dimension &, ChunkSource &, Random &, BlockPos const&);
};
