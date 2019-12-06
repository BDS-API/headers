#pragma once

class PillagerOutpostStart : StructureStart {

public:
    virtual ~PillagerOutpostStart();
    virtual void postProcess(BlockSource *, Random &, BoundingBox const&);
    virtual void getType(void)const;

    void PillagerOutpostStart(void);
    void _fillWithSupportBlock(BlockPos const&, BlockSource *, BoundingBox const&, Block const&);
    void PillagerOutpostStart(Dimension &, Random &, int, int);
    void createOutpost(Dimension &, Random &, int, int);
};
