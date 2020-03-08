#pragma once

#include "../ItemStack"
#include "../../../json/Value"
#include "../condition/LootItemCondition"
#include "../../../unmapped/Trade"
#include "../../../unmapped/LootTableContext"
#include "../../util/Random"
#include "../ItemInstance"


class LootItemFunction {

public:
    static long mLootingFunctions;

    LootItemFunction::~LootItemFunction()
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);

    void getConditions()const;
    void deserialize(Json::Value);
    LootItemFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
