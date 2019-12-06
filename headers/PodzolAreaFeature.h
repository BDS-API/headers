#pragma once

class PodzolAreaFeature : Feature {

public:
    virtual ~PodzolAreaFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void PodzolAreaFeature(void);
};
