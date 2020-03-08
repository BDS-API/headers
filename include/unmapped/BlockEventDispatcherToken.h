#pragma once



class BlockEventDispatcherToken {

public:

    bool isValid(void)const;
    BlockEventDispatcherToken(BlockEventDispatcherToken&&);
    void unregister(void);
    void getDispatcher(void);
    void getHandle(void);
    BlockEventDispatcherToken(void);
    BlockEventDispatcherToken(BlockEventDispatcher &, int);
};
