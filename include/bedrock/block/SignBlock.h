#pragma once

#include "unmapped/BlockSource"
#include "../actor/Actor"
#include "../util/Random"
#include "../../unmapped/Block"
#include "../util/BlockPos"
#include "actor/BlockActor"
#include "../util/AABB"


class SignBlock : ActorBlock {

public:
    virtual SignBlock::~SignBlock()
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    SignBlock(std::string const&, int, bool, SignBlockActor::SignType);
    void getShape(int, AABB &)const;
    void _getItemInstance()const;
    void getSignType()const;
};
