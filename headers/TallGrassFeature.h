#pragma once

class TallGrassFeature : Feature {

public:
    virtual ~TallGrassFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void TallGrassFeature(Block const&);
    void place(BlockSource &, BlockPos const&, Random &, int, int)const;
};
