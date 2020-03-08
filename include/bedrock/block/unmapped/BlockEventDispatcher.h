#pragma once

#include "../../../unmapped/Block"
#include "../../util/BlockPos"
#include "../../util/Vec3"


class BlockEventDispatcher {

public:

    BlockEventDispatcher(void);
    void registerListener(Vec3 const&, float, std::function<void ()(Block const&)>);
    void dispatchEvent(BlockPos const&, Block const&, Block const&);
    void removeListener(int);
    void updatePosition(int, Vec3 const&);
    void updateRadius(int, float);
};
