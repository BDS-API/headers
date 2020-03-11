#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "../../unmapped/Block.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../actor/Player.h"
#include "../util/Random.h"
#include "./BlockLegacy.h"


class RedStoneOreBlock : BlockLegacy {

public:
    virtual ~RedStoneOreBlock();
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void getExperienceDrop(Random &)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;

    RedStoneOreBlock(std::string const&, int, bool);
    void _interact(BlockSource &, BlockPos const&)const;
    void _poofParticles(BlockSource &, BlockPos const&)const;
};
