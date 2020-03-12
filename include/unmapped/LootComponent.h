#pragma once



class LootComponent {

public:
    LootComponent(BlockLegacy &);
    void init(LootComponentDescription const&);
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const;
    ~LootComponent();
};
