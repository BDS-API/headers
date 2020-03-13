#pragma once



class BreakBlocksComponent {

public:
    BreakBlocksComponent(BreakBlocksComponent &&); // _ZN20BreakBlocksComponentC2EOS_
    void initFromDefinition(Actor &); // _ZN20BreakBlocksComponent18initFromDefinitionER5Actor
    void breakNearbyBlocks(Actor &); // _ZN20BreakBlocksComponent17breakNearbyBlocksER5Actor
    bool isBreakable(Actor &, BlockLegacy const&)const; // _ZNK20BreakBlocksComponent11isBreakableER5ActorRK11BlockLegacy
};
