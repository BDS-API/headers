#pragma once

class DoublePlantFeature : Feature {

public:
    virtual DoublePlantFeature::~DoublePlantFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    DoublePlantFeature(void);
    void place(BlockSource &, BlockPos const&, Random &, DoublePlantType)const;
};
