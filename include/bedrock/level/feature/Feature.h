#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "../../../unmapped/WorldChangeTransaction.h"
#include "../../actor/Actor.h"
#include "../../../unmapped/IBlockPlacementTarget.h"
#include "./IFeature.h"
#include "../../util/BlockPos.h"
#include "../../block/unmapped/BlockSource.h"


class Feature : IFeature {

public:
    virtual ~Feature();
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
