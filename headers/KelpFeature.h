#pragma once

class KelpFeature : Feature {

public:
    virtual ~KelpFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void KelpFeature(void);
    void _canPlace(BlockSource &, BlockPos const&)const;
};
