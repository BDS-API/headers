#pragma once

#include "../../../unmapped/Block.h"
#include "../../../unmapped/Material.h"
#include "../../util/Random.h"
#include "../../block/unmapped/BlockSource.h"
#include "../../actor/Actor.h"
#include "Feature.h"
#include "../../util/BlockPos.h"


class TreeFeature : Feature {

public:
    virtual void place(BlockSource &, BlockPos const&, Random &)const;
    ~TreeFeature();
    TreeFeature(Actor *, int, int, bool, bool);
    void _addVine(BlockSource &, BlockPos const&, int)const;
    void _isFree(Block const&)const;
    void _placeLeaf(BlockSource &, BlockPos const&)const;
    void _tryReplaceDirtFloor(BlockSource &, BlockPos const&)const;
    void _trackBeehiveLeaf(BlockPos const&, BlockPos const&, int &)const;
    void _tryAddBeeHive(BlockSource &, BlockPos const&, Random &, int)const;
    void _isFree(Material const&)const;
    void _getTrunkType()const;
    void _getLeafType()const;
    void _addCocoaPlants(BlockSource &, BlockPos const&, Random &, int)const;
    void place(BlockSource &, BlockPos const&, Random &, int)const;
    void _placeTrunk(BlockSource &, BlockPos const&, Random &, int)const;
    void _addJungleFeatures(BlockSource &, BlockPos const&, Random &)const;
    void _prepareSpawn(BlockSource &, BlockPos const&, int)const;
    void _placeFallenTrunk(BlockSource &, BlockPos const&, Random &, int)const;
};
