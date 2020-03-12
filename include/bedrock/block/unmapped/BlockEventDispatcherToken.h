#pragma once

#include "BlockEventDispatcher.h"


class BlockEventDispatcherToken {

public:
    BlockEventDispatcherToken();
    ~BlockEventDispatcherToken();
    bool isValid()const;
    void unregister();
    void getHandle();
    BlockEventDispatcherToken(BlockEventDispatcherToken &&);
    BlockEventDispatcherToken(BlockEventDispatcher &, int);
    void getDispatcher();
};
