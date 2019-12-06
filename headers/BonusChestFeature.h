#pragma once

class BonusChestFeature : Feature {

public:
    virtual ~BonusChestFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void BonusChestFeature(void);
    void _place(BlockSource &, BlockPos const&, Random &)const;
    void _getFacingDataId(BlockSource &, BlockPos const&, int, int)const;
};
