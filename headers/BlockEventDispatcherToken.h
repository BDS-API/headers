#pragma once

class BlockEventDispatcherToken {

public:

    bool isValid(void)const;
    void BlockEventDispatcherToken(BlockEventDispatcherToken&&);
    void unregister(void);
    void getDispatcher(void);
    void getHandle(void);
    void BlockEventDispatcherToken(void);
    void BlockEventDispatcherToken(BlockEventDispatcher &, int);
};
