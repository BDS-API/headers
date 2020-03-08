#pragma once

#include "../ItemInstance"
#include "../ItemStack"
#include "../../../json/Value"
#include "../condition/LootItemCondition"


class SetItemCountFunction : LootItemFunction {

public:
    virtual SetItemCountFunction::~SetItemCountFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    SetItemCountFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, RandomValueBounds &);
};
