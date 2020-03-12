#pragma once

#include "../../util/BlockPos.h"
#include "../../../unmapped/Block.h"
#include "../../util/Vec3.h"
#include <functional>


class BlockEventDispatcher {

public:
    BlockEventDispatcher();
    void dispatchEvent(BlockPos const&, Block const&, Block const&);
    void removeListener(int);
    void registerListener(Vec3 const&, float, std::function<void (Block const&)>);
    ~BlockEventDispatcher();
    void updatePosition(int, Vec3 const&);
    void updateRadius(int, float);
};
