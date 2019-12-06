#pragma once

class FlowerFeature : Feature {

public:
    virtual ~FlowerFeature();
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    void FlowerFeature(Block const&);
    void _placeMushroom(BlockSource &, BlockPos const&, Block const&, Random &)const;
    void placeFlower(BlockSource &, BlockPos const&, Block const&, Random &)const;
};
