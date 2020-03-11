#pragma once

#include "../../util/Random.h"
#include "../condition/LootItemCondition.h"
#include "../../../unmapped/LootTableContext.h"
#include <memory>
#include "../../../json/Value.h"
#include <vector>
#include "../ItemInstance.h"
#include "../../../unmapped/Trade.h"
#include "../ItemStack.h"


class LootItemFunction {

public:
    static long mLootingFunctions;

    virtual ~LootItemFunction();
    virtual void apply(ItemStack &, Random &, Trade const&, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, Trade const&, LootTableContext &);

    void getConditions()const;
    void deserialize(Json::Value);
    LootItemFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
