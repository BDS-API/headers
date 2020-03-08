#pragma once



class BlockEventDispatcherToken {

public:

    bool isValid()const;
    BlockEventDispatcherToken(BlockEventDispatcherToken&&);
    void unregister();
    void getDispatcher();
    void getHandle();
    BlockEventDispatcherToken(void);
    BlockEventDispatcherToken(BlockEventDispatcher &, int);
};
