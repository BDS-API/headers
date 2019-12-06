#pragma once

class WaterlilyFeature : Feature {

public:
    virtual ~WaterlilyFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void WaterlilyFeature(void);
};
