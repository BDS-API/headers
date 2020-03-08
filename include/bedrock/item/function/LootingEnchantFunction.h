#pragma once

#include "../ItemInstance"
#include "../ItemStack"
#include "../../../json/Value"
#include "../condition/LootItemCondition"


class LootingEnchantFunction : LootItemFunction {

public:
    virtual LootingEnchantFunction::~LootingEnchantFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    LootingEnchantFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, RandomValueBounds &);
};
