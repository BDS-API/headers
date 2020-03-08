#pragma once

#include "../ItemStack"
#include "../../../json/Value"
#include "../../../unmapped/EnchantmentInstance"
#include "../condition/LootItemCondition"
#include "../../../unmapped/LootTableContext"
#include "../../util/Random"
#include "../ItemInstance"


class EnchantRandomlyFunction : LootItemFunction {

public:
    EnchantRandomlyFunction::~EnchantRandomlyFunction()
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    EnchantRandomlyFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, std::vector<EnchantmentInstance, std::allocator<EnchantmentInstance>>, bool);
};
