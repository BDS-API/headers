#pragma once

#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "../../unmapped/Block.h"
#include "../actor/Player.h"
#include "BlockLegacy.h"
#include "../util/Random.h"


class RedStoneOreBlock : BlockLegacy {

public:
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getExperienceDrop(Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    ~RedStoneOreBlock();
    virtual void attack(Player *, BlockPos const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    void _interact(BlockSource &, BlockPos const&)const;
    RedStoneOreBlock(std::string const&, int, bool);
    void _poofParticles(BlockSource &, BlockPos const&)const;
};
