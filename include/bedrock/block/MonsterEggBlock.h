#pragma once

#include <string>
#include "BlockLegacy.h"


class MonsterEggBlock : BlockLegacy {

public:
    ~MonsterEggBlock(); // _ZN15MonsterEggBlockD2Ev
    virtual void getResourceCount(Random &, Block const&, int)const; // _ZNK15MonsterEggBlock16getResourceCountER6RandomRK5Blocki
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK15MonsterEggBlock14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
    virtual std::string buildDescriptionId(Block const&)const; // _ZNK15MonsterEggBlock18buildDescriptionIdB5cxx11ERK5Block
    virtual bool isAuxValueRelevantForPicking()const; // _ZNK15MonsterEggBlock28isAuxValueRelevantForPickingEv
    virtual void getVariant(Block const&)const; // _ZNK15MonsterEggBlock10getVariantERK5Block
    virtual void getSilkTouchItemInstance(Block const&)const; // _ZNK15MonsterEggBlock24getSilkTouchItemInstanceERK5Block
    MonsterEggBlock(std::string const&, int); // _ZN15MonsterEggBlockC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEi
    void getHostBlock(Block const&); // _ZN15MonsterEggBlock12getHostBlockERK5Block
    bool isCompatibleHostBlock(Block const&); // _ZN15MonsterEggBlock21isCompatibleHostBlockERK5Block
    void getMonsterEggStoneTypeForHostBlock(Block const&); // _ZN15MonsterEggBlock34getMonsterEggStoneTypeForHostBlockERK5Block
};
