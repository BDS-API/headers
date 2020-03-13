#pragma once

#include <functional>


class BlockEventDispatcher {

public:
    ~BlockEventDispatcher(); // _ZN20BlockEventDispatcherD2Ev
    BlockEventDispatcher(); // _ZN20BlockEventDispatcherC2Ev
    void registerListener(Vec3 const&, float, std::function<void (Block const&)>); // _ZN20BlockEventDispatcher16registerListenerERK4Vec3fSt8functionIFvRK5BlockEE
    void dispatchEvent(BlockPos const&, Block const&, Block const&); // _ZN20BlockEventDispatcher13dispatchEventERK8BlockPosRK5BlockS5_
    void removeListener(int); // _ZN20BlockEventDispatcher14removeListenerEi
    void updatePosition(int, Vec3 const&); // _ZN20BlockEventDispatcher14updatePositionEiRK4Vec3
    void updateRadius(int, float); // _ZN20BlockEventDispatcher12updateRadiusEif
};
