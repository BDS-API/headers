#pragma once

#include "../../../unmapped/Block.h"
#include "../../util/Random.h"
#include "../../../unmapped/IBlockPlacementTarget.h"
#include <vector>
#include "../../util/BlockPos.h"
#include "IFeature.h"


class OreFeature : IFeature {

public:
    ~OreFeature();
    virtual void place(IBlockPlacementTarget &, BlockPos const&, Random &)const;
    OreFeature(int, Block const*, std::vector<Block const*> &&);
    void _isReplaceable(Block const&)const;
    OreFeature();
};
