#pragma once



class LootComponent {

public:
    ~LootComponent(); // _ZN13LootComponentD2Ev
    void init(LootComponentDescription const&); // _ZN13LootComponent4initERK24LootComponentDescription
    LootComponent(BlockLegacy &); // _ZN13LootComponentC2ER11BlockLegacy
    void spawnResources(BlockSource &, BlockPos const&, Block const&, float, int)const; // _ZNK13LootComponent14spawnResourcesER11BlockSourceRK8BlockPosRK5Blockfi
};
