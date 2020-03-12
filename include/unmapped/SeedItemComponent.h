#pragma once

#include <string>
#include "../bedrock/item/Item.h"
#include "../bedrock/util/BlockPos.h"
#include "../bedrock/util/Vec3.h"
#include "../json/Value.h"
#include "Block.h"
#include "../bedrock/item/ItemStack.h"
#include "../bedrock/actor/Actor.h"


class SeedItemComponent {

public:
    ~SeedItemComponent();
    void _canPlant(Block const&)const;
    bool isPlanting()const;
    void useOn(ItemStack &, Actor &, BlockPos const&, unsigned char, Vec3 const&);
    void init(Json::Value &);
    bool canUseOn(Actor &, BlockPos const&, unsigned char)const;
    SeedItemComponent(Item &);
    void _parsePlantingBlocks(Json::Value const&, std::string &);
};
