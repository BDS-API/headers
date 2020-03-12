#pragma once



class BlockEventDispatcherToken {

public:
    void getHandle();
    void getDispatcher();
    BlockEventDispatcherToken(BlockEventDispatcher &, int);
    bool isValid()const;
    ~BlockEventDispatcherToken();
    BlockEventDispatcherToken(BlockEventDispatcherToken &&);
    BlockEventDispatcherToken();
    void unregister();
};
