#pragma once

#include "unmapped/BlockSource.h"
#include <string>
#include "actor/BlockActor.h"
#include "./ActorBlock.h"
#include "../util/BlockPos.h"
#include "../actor/Actor.h"
#include "../util/AABB.h"
#include "../util/Random.h"
#include "../../unmapped/Block.h"


class SignBlock : ActorBlock {

public:
    virtual ~SignBlock();
    virtual void getAABB(BlockSource &, BlockPos const&, Block const&, AABB &, bool)const;
    virtual void checkIsPathable(Actor &, BlockPos const&, BlockPos const&)const;
    virtual void neighborChanged(BlockSource &, BlockPos const&, BlockPos const&)const;
    virtual bool asItemInstance(BlockSource &, BlockPos const&, Block const&)const;
    virtual void getVisualShape(Block const&, AABB &, bool)const;
    virtual void getEntityResourceItem(Random &, BlockActor const&, int)const;

//  SignBlock(std::string const&, int, bool, SignBlockActor::SignType); //TODO: incomplete function definition
    void getShape(int, AABB &)const;
    void _getItemInstance()const;
    void getSignType()const;
};
