#pragma once

class LootComponent {

public:

    void init(LootComponentDescription const&);
    void LootComponent(BlockLegacy &);
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
};
