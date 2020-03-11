#pragma once

#include "../bedrock/block/unmapped/BlockTick.h"


namespace BlockTickingQueue {

class HashBlockTick {

public:

    void operator()(BlockTickingQueue::BlockTick const&)const;
};

}