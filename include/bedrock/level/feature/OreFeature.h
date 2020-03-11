#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/Block.h"
#include "../../../unmapped/IBlockPlacementTarget.h"
#include "./IFeature.h"
#include <memory>
#include "../../util/BlockPos.h"
#include <vector>


class OreFeature : IFeature {

public:
    virtual ~OreFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;

    OreFeature();
    OreFeature(int, Block const*, std::vector<Block const*, std::allocator<Block const*>> &&);
    void _isReplaceable(Block const&)const;
};
