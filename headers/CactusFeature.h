#pragma once

class CactusFeature : Feature {

public:
    virtual ~CactusFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void CactusFeature(void);
};
