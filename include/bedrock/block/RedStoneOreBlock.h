#pragma once

#include <string>
#include "BlockLegacy.h"


class RedStoneOreBlock : BlockLegacy {

public:
    virtual void onStepOn(Actor &, BlockPos const&)const;
    virtual void getResourceItem(Random &, Block const&, int)const;
    virtual void getExperienceDrop(Random &)const;
    virtual void animateTick(BlockSource &, BlockPos const&, Random &)const;
    virtual void attack(Player *, BlockPos const&)const;
    virtual void tick(BlockSource &, BlockPos const&, Random &)const;
    virtual void getSilkTouchItemInstance(Block const&)const;
    virtual void getResourceCount(Random &, Block const&, int)const;
    virtual void use(Player &, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    ~RedStoneOreBlock();
    void _poofParticles(BlockSource &, BlockPos const&)const;
    void _interact(BlockSource &, BlockPos const&)const;
    RedStoneOreBlock(std::string const&, int, bool);
};
