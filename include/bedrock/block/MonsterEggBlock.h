#pragma once

#include <string>
#include "unmapped/BlockSource.h"
#include "./BlockLegacy.h"
#include "../util/BlockPos.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class MonsterEggBlock : BlockLegacy {

public:
    virtual ~MonsterEggBlock();
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual std::string buildDescriptionId(Block const&)const;
    virtual bool isAuxValueRelevantForPicking()const;
    virtual void getVariant(Block const&)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    MonsterEggBlock(std::string const&, int);
    void getHostBlock(Block const&);
    bool isCompatibleHostBlock(Block const&);
    void getMonsterEggStoneTypeForHostBlock(Block const&);
};
