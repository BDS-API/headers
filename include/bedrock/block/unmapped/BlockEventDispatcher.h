#pragma once

#include <functional>


class BlockEventDispatcher {

public:
    void dispatchEvent(BlockPos const&, Block const&, Block const&);
    void registerListener(Vec3 const&, float, std::function<void (Block const&)>);
    ~BlockEventDispatcher();
    void updatePosition(int, Vec3 const&);
    BlockEventDispatcher();
    void updateRadius(int, float);
    void removeListener(int);
};
