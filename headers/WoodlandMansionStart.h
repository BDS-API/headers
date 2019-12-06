#pragma once

class WoodlandMansionStart : StructureStart {

public:
    virtual ~WoodlandMansionStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType(void)const;

    void WoodlandMansionStart(void);
    void WoodlandMansionStart(Dimension &, OverworldGenerator &, Random &, int, int);
    void _create(Dimension &, OverworldGenerator &, Random &, int, int);
    void _fillCobblestone(BlockPos const&, BlockSource *, BoundingBox const&);
    void _convertToStairsDirection(unsigned char)const;
    void _makeStairs(BlockPos const&, Block const&, unsigned char, unsigned char, BlockSource *, BoundingBox const&);
    void createFromSlashCommand(Dimension &, ChunkSource &, Random &, BlockPos const&);
};
