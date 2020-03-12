#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../../unmapped/Block.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class MonsterEggBlock : BlockLegacy {

public:
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getVariant(Block const&)const;
    virtual std::string buildDescriptionId(Block const&)const;
    ~MonsterEggBlock();
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    void getMonsterEggStoneTypeForHostBlock(Block const&);
    void getHostBlock(Block const&);
    bool isCompatibleHostBlock(Block const&);
    MonsterEggBlock(std::string const&, int);
};
