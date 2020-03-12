#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../../unmapped/IBlockPlacementTarget.h"
#include "../../../unmapped/WorldChangeTransaction.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "../../util/BlockPos.h"
#include "IFeature.h"


class Feature : IFeature {

public:
    ~Feature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    void _getManuallyPlaced()const;
    void setTransaction(WorldChangeTransaction *);
    Feature(Actor *);
    void _getBlock(BlockSource &, BlockPos const&)const;
    void _isEmptyBlock(BlockSource &, BlockPos const&)const;
    void _placeBlock(BlockSource &, BlockPos const&, Block const&)const;
    void _getMaterial(BlockSource &, BlockPos const&)const;
    void _setManuallyPlaced(Actor *);
};
