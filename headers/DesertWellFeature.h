#pragma once

class DesertWellFeature : Feature {

public:
    virtual ~DesertWellFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void DesertWellFeature(void);
};
