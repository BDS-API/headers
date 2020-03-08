#pragma once

#include "../ItemInstance"
#include "../ItemStack"
#include "../../../json/Value"
#include "../condition/LootItemCondition"


class RandomBlockStateFunction : LootItemFunction {

public:
    virtual RandomBlockStateFunction::~RandomBlockStateFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    RandomBlockStateFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, RandomValueBounds &, std::string const&);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
