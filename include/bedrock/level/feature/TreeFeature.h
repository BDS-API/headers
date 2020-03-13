#pragma once

#include "Feature.h"


class TreeFeature : Feature {

public:
    ~TreeFeature(); // _ZN11TreeFeatureD2Ev
    virtual void place(BlockSource &, BlockPos const&, Random &)const; // _ZNK11TreeFeature5placeER11BlockSourceRK8BlockPosR6Random
    TreeFeature(Actor *, int, int, bool, bool); // _ZN11TreeFeatureC2EP5Actoriibb
    void _placeLeaf(BlockSource &, BlockPos const&)const; // _ZNK11TreeFeature10_placeLeafER11BlockSourceRK8BlockPos
    void _prepareSpawn(BlockSource &, BlockPos const&, int)const; // _ZNK11TreeFeature13_prepareSpawnER11BlockSourceRK8BlockPosi
    void _isFree(Block const&)const; // _ZNK11TreeFeature7_isFreeERK5Block
    void _tryReplaceDirtFloor(BlockSource &, BlockPos const&)const; // _ZNK11TreeFeature20_tryReplaceDirtFloorER11BlockSourceRK8BlockPos
    void place(BlockSource &, BlockPos const&, Random &, int)const; // _ZNK11TreeFeature5placeER11BlockSourceRK8BlockPosR6Randomi
    void _placeFallenTrunk(BlockSource &, BlockPos const&, Random &, int)const; // _ZNK11TreeFeature17_placeFallenTrunkER11BlockSourceRK8BlockPosR6Randomi
    void _placeTrunk(BlockSource &, BlockPos const&, Random &, int)const; // _ZNK11TreeFeature11_placeTrunkER11BlockSourceRK8BlockPosR6Randomi
    void _trackBeehiveLeaf(BlockPos const&, BlockPos const&, int &)const; // _ZNK11TreeFeature17_trackBeehiveLeafERK8BlockPosS2_Ri
    void _addJungleFeatures(BlockSource &, BlockPos const&, Random &)const; // _ZNK11TreeFeature18_addJungleFeaturesER11BlockSourceRK8BlockPosR6Random
    void _addCocoaPlants(BlockSource &, BlockPos const&, Random &, int)const; // _ZNK11TreeFeature15_addCocoaPlantsER11BlockSourceRK8BlockPosR6Randomi
    void _tryAddBeeHive(BlockSource &, BlockPos const&, Random &, int)const; // _ZNK11TreeFeature14_tryAddBeeHiveER11BlockSourceRK8BlockPosR6Randomi
    void _addVine(BlockSource &, BlockPos const&, int)const; // _ZNK11TreeFeature8_addVineER11BlockSourceRK8BlockPosi
    void _isFree(Material const&)const; // _ZNK11TreeFeature7_isFreeERK8Material
    void _getTrunkType()const; // _ZNK11TreeFeature13_getTrunkTypeEv
    void _getLeafType()const; // _ZNK11TreeFeature12_getLeafTypeEv
};
