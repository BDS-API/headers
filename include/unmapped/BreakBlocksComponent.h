#pragma once



class BreakBlocksComponent {

public:
    void breakNearbyBlocks(Actor &);
    void initFromDefinition(Actor &);
    BreakBlocksComponent(BreakBlocksComponent &&);
    bool isBreakable(Actor &, BlockLegacy const&)const;
};
