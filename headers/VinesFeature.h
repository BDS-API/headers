#pragma once

class VinesFeature : Feature {

public:
    virtual ~VinesFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void VinesFeature(void);
};
