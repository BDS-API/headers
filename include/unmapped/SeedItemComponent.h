#pragma once

#include "../bedrock/util/Vec3.h"
#include <string>
#include "../json/Value.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"
#include "./Block.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/item/Item.h"


class SeedItemComponent {

public:

    ~SeedItemComponent();
    SeedItemComponent(Item &);
    void init(Json::Value &);
    void _parsePlantingBlocks(Json::Value const&, std::string &);
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&);
    void _canPlant(Block const&)const;
    bool canUseOn(Actor &, BlockPos const&, unsigned char)const;
    bool isPlanting()const;
};
