#pragma once

#include <string>
#include "ActorBlock.h"


class SignBlock : ActorBlock {

public:
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    ~SignBlock();
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    void getShape(int, AABB &)const;
    void _getItemInstance()const;
    void getSignType()const;
//  SignBlock(std::string const&, int, bool, SignBlockActor::SignType); //TODO: incomplete function definition
};
