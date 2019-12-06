#pragma once

class BlueIceFeature : Feature {

public:
    virtual ~BlueIceFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void BlueIceFeature(void);
};
