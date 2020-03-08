#pragma once

#include "../../unmapped/AABB"
#include "../../unmapped/Block"
#include "../../unmapped/BlockSource"
#include "../actor/Actor"
#include "../../unmapped/Random"


class SignBlock : ActorBlock {

public:
    virtual SignBlock::~SignBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

    SignBlock(std::string const&, int, bool, SignBlockActor::SignType);
    void getShape(int, AABB &)const;
    void _getItemInstance(void)const;
    void getSignType(void)const;
};
