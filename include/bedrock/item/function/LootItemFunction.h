#pragma once

#include "../../../json/Value.h"
#include <vector>


class LootItemFunction {

public:
    static long mLootingFunctions;

    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    ~LootItemFunction();
    void deserialize(Json::Value);
    void getConditions()const;
    LootItemFunction(std::vector<std::unique_ptr<LootItemCondition>> &);
};
