#pragma once

class LootComponent {

public:

    void init(LootComponentDescription const&);
    LootComponent(BlockLegacy &);
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
};
