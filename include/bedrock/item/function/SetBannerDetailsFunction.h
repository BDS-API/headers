#pragma once

#include "../../util/Random.h"
#include "../condition/LootItemCondition.h"
#include "../../../unmapped/LootTableContext.h"
#include <memory>
#include "./LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>
#include "../ItemInstance.h"
#include "../ItemStack.h"


class SetBannerDetailsFunction : LootItemFunction {

public:
    virtual ~SetBannerDetailsFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

//  SetBannerDetailsFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, BannerBlockType); //TODO: incomplete function definition
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
