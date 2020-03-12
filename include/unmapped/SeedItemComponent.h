#pragma once

#include <string>


class SeedItemComponent {

public:
    void _canPlant(Block const&)const;
    void _parsePlantingBlocks(Json::Value const&, std::string &);
    bool canUseOn(Actor &, BlockPos const&, unsigned char)const;
    bool isPlanting()const;
    SeedItemComponent(Item &);
    ~SeedItemComponent();
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&);
    void init(Json::Value &);
};
