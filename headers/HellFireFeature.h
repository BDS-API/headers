#pragma once

class HellFireFeature : Feature {

public:
    virtual ~HellFireFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void HellFireFeature(void);
};
