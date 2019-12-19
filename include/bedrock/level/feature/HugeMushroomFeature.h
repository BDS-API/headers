#pragma once

class HugeMushroomFeature : Feature {

public:
    static long mMushroomTypes;
    static long mHugeMushroomTypes;

    virtual HugeMushroomFeature::~HugeMushroomFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    HugeMushroomFeature(void);
    HugeMushroomFeature(int);
    void shutdown(void);
    void _canSurvive(Block const&)const;
};
