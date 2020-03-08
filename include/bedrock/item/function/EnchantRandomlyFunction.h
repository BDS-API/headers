#pragma once

#include "../../util/Random"
#include "../../../unmapped/LootTableContext"
#include "../../../unmapped/EnchantmentInstance"
#include "../ItemInstance"
#include "../condition/LootItemCondition"
#include "../ItemStack"
#include "../../../json/Value"


class EnchantRandomlyFunction : LootItemFunction {

public:
    virtual EnchantRandomlyFunction::~EnchantRandomlyFunction()
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    EnchantRandomlyFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, std::vector<EnchantmentInstance, std::allocator<EnchantmentInstance>>, bool);
};
