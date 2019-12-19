#pragma once

class CactusFeature : Feature {

public:
    virtual CactusFeature::~CactusFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    CactusFeature(void);
};
