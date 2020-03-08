#pragma once

#include "../util/Random"
#include "../util/BlockPos"
#include "unmapped/BlockSource"
#include "../../unmapped/Block"


class MonsterEggBlock : BlockLegacy {

public:
    MonsterEggBlock::~MonsterEggBlock()
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    MonsterEggBlock(std::string const&, int);
    void getHostBlock(Block const&);
    bool isCompatibleHostBlock(Block const&);
    void getMonsterEggStoneTypeForHostBlock(Block const&);
};
