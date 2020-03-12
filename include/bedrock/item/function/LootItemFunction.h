#pragma once

#include "../condition/LootItemCondition.h"
#include "../ItemInstance.h"
#include "../../util/Random.h"
#include "../../../unmapped/Trade.h"
#include "../../../unmapped/LootTableContext.h"
#include <vector>
#include <memory>
#include "../../../json/Value.h"
#include "../ItemStack.h"


class LootItemFunction {

public:
    static long mLootingFunctions;

    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);
    ~LootItemFunction();
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    void deserialize(Json::Value);
    LootItemFunction(std::vector<std::unique_ptr<LootItemCondition>> &);
    void getConditions()const;
};
