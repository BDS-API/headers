#pragma once

#include "./BlockEventDispatcherToken.h"
#include "./BlockEventDispatcher.h"


class BlockEventDispatcherToken {

public:

    bool isValid()const;
    BlockEventDispatcherToken(BlockEventDispatcherToken &&);
    ~BlockEventDispatcherToken();
    void unregister();
    void getDispatcher();
    void getHandle();
    BlockEventDispatcherToken();
    BlockEventDispatcherToken(BlockEventDispatcher &, int);
};
