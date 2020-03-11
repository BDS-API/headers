#pragma once

#include "../../util/Vec3.h"
#include "../../../unmapped/Block.h"
#include <functional>
#include "../../util/BlockPos.h"


class BlockEventDispatcher {

public:

    ~BlockEventDispatcher();
    BlockEventDispatcher();
//  void registerListener(Vec3 const&, float, std::function<void (Block const&)>); //TODO: incomplete function definition
    void dispatchEvent(BlockPos const&, Block const&, Block const&);
    void removeListener(int);
    void updatePosition(int, Vec3 const&);
    void updateRadius(int, float);
};
