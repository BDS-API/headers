#pragma once



class BlockEventDispatcherToken {

public:
    bool isValid()const; // _ZNK25BlockEventDispatcherToken7isValidEv
    BlockEventDispatcherToken(BlockEventDispatcherToken &&); // _ZN25BlockEventDispatcherTokenC2EOS_
    ~BlockEventDispatcherToken(); // _ZN25BlockEventDispatcherTokenD2Ev
    void unregister(); // _ZN25BlockEventDispatcherToken10unregisterEv
    void getDispatcher(); // _ZN25BlockEventDispatcherToken13getDispatcherEv
    void getHandle(); // _ZN25BlockEventDispatcherToken9getHandleEv
    BlockEventDispatcherToken(); // _ZN25BlockEventDispatcherTokenC2Ev
    BlockEventDispatcherToken(BlockEventDispatcher &, int); // _ZN25BlockEventDispatcherTokenC2ER20BlockEventDispatcheri
};
