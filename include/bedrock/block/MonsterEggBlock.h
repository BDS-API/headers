#pragma once

#include <string>
#include "BlockLegacy.h"


class MonsterEggBlock : BlockLegacy {

public:
    virtual std::string buildDescriptionId(Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    ~MonsterEggBlock();
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    void getMonsterEggStoneTypeForHostBlock(Block const&);
    void getHostBlock(Block const&);
    MonsterEggBlock(std::string const&, int);
    bool isCompatibleHostBlock(Block const&);
};
