#pragma once

class WaterlilyFeature : Feature {

public:
    virtual WaterlilyFeature::~WaterlilyFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    WaterlilyFeature(void);
};
