#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../../unmapped/WorldChangeTransaction"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"
#include "../../../unmapped/IBlockPlacementTarget"


class Feature : IFeature {

public:
    virtual Feature::~Feature()
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    Feature(Actor *);
    void _setManuallyPlaced(Actor *);
    void _getManuallyPlaced()const;
    void setTransaction(WorldChangeTransaction *);
    void _placeBlock(BlockSource &, BlockPos const&, Block const&)const;
    void _getBlock(BlockSource &, BlockPos const&)const;
    void _isEmptyBlock(BlockSource &, BlockPos const&)const;
    void _getMaterial(BlockSource &, BlockPos const&)const;
};
