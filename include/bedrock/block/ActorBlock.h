#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "actor/BlockActor.h"
#include "../../unmapped/Material.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class ActorBlock : BlockLegacy {

public:
    ~ActorBlock();
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void playerWillDestroy(Player &, BlockPos const&, Block const&)const;
    virtual void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    virtual void triggerEvent(BlockSource &, BlockPos const&, int, int)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    virtual bool canBeSilkTouched()const;
    ActorBlock(std::string const&, int, Material const&);
    void newBlockEntity(BlockPos const&, Block const&)const;
};
