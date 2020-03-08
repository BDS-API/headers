#pragma once

#include "../util/Random"
#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/BlockPos"
#include "../../unmapped/Block"
#include "../actor/Player"


class RedStoneOreBlock : BlockLegacy {

public:
    virtual RedStoneOreBlock::~RedStoneOreBlock()
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
