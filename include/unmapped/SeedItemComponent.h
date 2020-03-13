#pragma once

#include <string>


class SeedItemComponent {

public:
    ~SeedItemComponent(); // _ZN17SeedItemComponentD2Ev
    SeedItemComponent(Item &); // _ZN17SeedItemComponentC2ER4Item
    void init(Json::Value &); // _ZN17SeedItemComponent4initERN4Json5ValueE
    void _parsePlantingBlocks(Json::Value const&, std::string &); // _ZN17SeedItemComponent20_parsePlantingBlocksERKN4Json5ValueERNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&); // _ZN17SeedItemComponent5useOnER9ItemStackR5ActorRK8BlockPoshRK4Vec3
    void _canPlant(Block const&)const; // _ZNK17SeedItemComponent9_canPlantERK5Block
    bool canUseOn(Actor &, BlockPos const&, unsigned char)const; // _ZNK17SeedItemComponent8canUseOnER5ActorRK8BlockPosh
    bool isPlanting()const; // _ZNK17SeedItemComponent10isPlantingEv
};
