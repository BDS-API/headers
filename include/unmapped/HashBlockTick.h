#pragma once

using namespace BlockTickingQueue;

class HashBlockTick {

public:

    void operator()(BlockTickingQueue::BlockTick const&)const;
};
