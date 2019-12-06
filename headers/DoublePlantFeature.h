#pragma once

class DoublePlantFeature : Feature {

public:
    virtual ~DoublePlantFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void DoublePlantFeature(void);
    void place(BlockSource &, BlockPos const&, Random &, DoublePlantType)const;
};
