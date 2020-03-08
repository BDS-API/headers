#pragma once

#include "../../util/Random"
#include "../../block/unmapped/BlockSource"
#include "../../actor/Actor"
#include "../../../unmapped/Material"
#include "../../util/BlockPos"
#include "../../../unmapped/Block"


class TreeFeature : Feature {

public:
    virtual TreeFeature::~TreeFeature()
    virtual void place(BlockSource &, BlockPos const&, Random &)const;

    TreeFeature(Actor *, int, int, bool, bool);
    void _placeLeaf(BlockSource &, BlockPos const&)const;
    void _prepareSpawn(BlockSource &, BlockPos const&, int)const;
    void _isFree(Block const&)const;
    void _tryReplaceDirtFloor(BlockSource &, BlockPos const&)const;
    void place(BlockSource &, BlockPos const&, Random &, int)const;
    void _placeFallenTrunk(BlockSource &, BlockPos const&, Random &, int)const;
    void _placeTrunk(BlockSource &, BlockPos const&, Random &, int)const;
    void _trackBeehiveLeaf(BlockPos const&, BlockPos const&, int &)const;
    void _addJungleFeatures(BlockSource &, BlockPos const&, Random &)const;
    void _addCocoaPlants(BlockSource &, BlockPos const&, Random &, int)const;
    void _tryAddBeeHive(BlockSource &, BlockPos const&, Random &, int)const;
    void _addVine(BlockSource &, BlockPos const&, int)const;
    void _isFree(Material const&)const;
    void _getTrunkType()const;
    void _getLeafType()const;
};
