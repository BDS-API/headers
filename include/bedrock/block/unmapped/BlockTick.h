#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Tick.h"
#include "./BlockTick.h"
#include "../../util/BlockPos.h"


namespace BlockTickingQueue {

class BlockTick {

public:

    BlockTick(BlockPos const&, Block const&, Tick const&, int);
    void operator==(BlockTickingQueue::BlockTick const&)const;
    void operator<(BlockTickingQueue::BlockTick const&)const;
    void operator>(BlockTickingQueue::BlockTick const&)const;
    BlockTick(BlockTickingQueue::BlockTick const&);
    BlockTick(BlockTickingQueue::BlockTick &&);
};

}