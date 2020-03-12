#pragma once

#include "StructureStart.h"


class WoodlandMansionStart : StructureStart {

public:
    virtual void getType()const;
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    ~WoodlandMansionStart();
    void _convertToStairsDirection(unsigned char)const;
    void _fillCobblestone(BlockPos const&, BlockSource *, BoundingBox const&);
    WoodlandMansionStart();
    WoodlandMansionStart(Dimension &, OverworldGenerator &, Random &, int, int);
    void createFromSlashCommand(Dimension &, ChunkSource &, Random &, BlockPos const&);
    void _makeStairs(BlockPos const&, Block const&, unsigned char, unsigned char, BlockSource *, BoundingBox const&);
    void _create(Dimension &, OverworldGenerator &, Random &, int, int);
};
