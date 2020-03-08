#pragma once

#include "../ItemInstance"
#include "../ItemStack"
#include "../../../json/Value"
#include "../condition/LootItemCondition"


class LootItemFunction {

public:
    static long mLootingFunctions;

    virtual LootItemFunction::~LootItemFunction();
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);

    void getConditions(void)const;
    void deserialize(Json::Value);
    LootItemFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
