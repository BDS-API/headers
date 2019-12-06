#pragma once

class IcePatchFeature : Feature {

public:
    virtual ~IcePatchFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void IcePatchFeature(int);
};
