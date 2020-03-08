#pragma once

#include "../../util/Random"
#include "../../../unmapped/LootTableContext"
#include "../ItemInstance"
#include "../../../unmapped/Trade"
#include "../condition/LootItemCondition"
#include "../ItemStack"
#include "../../../json/Value"


class LootItemFunction {

public:
    static long mLootingFunctions;

    virtual LootItemFunction::~LootItemFunction()
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);

    void getConditions()const;
    void deserialize(Json::Value);
    LootItemFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
