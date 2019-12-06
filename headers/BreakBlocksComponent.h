#pragma once

class BreakBlocksComponent {

public:

    void BreakBlocksComponent(BreakBlocksComponent&&);
    void initFromDefinition(Actor &);
    void breakNearbyBlocks(Actor &);
    bool isBreakable(Actor &, BlockLegacy const&)const;
};
