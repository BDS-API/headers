#pragma once

#include "../../../json/Value.h"
#include <vector>
#include "LootItemFunction.h"


class SetBannerDetailsFunction : LootItemFunction {

public:
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    ~SetBannerDetailsFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
//  SetBannerDetailsFunction(std::vector<std::unique_ptr<LootItemCondition>> &, BannerBlockType); //TODO: incomplete function definition
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
