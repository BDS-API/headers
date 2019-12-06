#pragma once

class MelonFeature : Feature {

public:
    virtual ~MelonFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void MelonFeature(void);
};
