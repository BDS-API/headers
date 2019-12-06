#pragma once

class BlockTickingQueue::HashBlockTick {

public:

    void operator()(BlockTickingQueue::BlockTick const&)const;
};
