#pragma once

#include "../bedrock/actor/Actor"
#include "../bedrock/item/Item"
#include "../bedrock/util/BlockPos"
#include "../bedrock/util/Vec3"
#include "../bedrock/item/ItemStack"
#include "../json/Value"


class SeedItemComponent {

public:

    SeedItemComponent(Item &);
    void init(Json::Value &);
    void _parsePlantingBlocks(Json::Value const&, std::string &);
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&);
    void _canPlant(Block const&)const;
    bool canUseOn(Actor &, BlockPos const&, unsigned char)const;
    bool isPlanting()const;
};
