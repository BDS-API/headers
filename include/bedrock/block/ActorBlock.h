#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "actor/BlockActor.h"
#include "../util/BlockPos.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "./BlockLegacy.h"


class ActorBlock : BlockLegacy {

public:
    virtual ~ActorBlock();
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual bool canBeSilkTouched()const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    ActorBlock(std::string const&, int, Material const&);
    void newBlockEntity(BlockPos const&, Block const&)const;
};
