#pragma once

#include "../util/AABB.h"
#include "unmapped/BlockSource.h"
#include "../util/BlockPos.h"
#include <string>
#include "../actor/Actor.h"
#include "ActorBlock.h"
#include "actor/BlockActor.h"
#include "../../unmapped/Block.h"
#include "../util/Random.h"


class SignBlock : ActorBlock {

public:
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    ~SignBlock();
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    void getShape(int, AABB &)const;
    void _getItemInstance()const;
//  SignBlock(std::string const&, int, bool, SignBlockActor::SignType); //TODO: incomplete function definition
    void getSignType()const;
};
