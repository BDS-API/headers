#pragma once

#include "../../util/Random.h"
#include "../condition/LootItemCondition.h"
#include "../../../unmapped/RandomValueBounds.h"
#include "../../../unmapped/LootTableContext.h"
#include <memory>
#include "./LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>
#include "../ItemInstance.h"
#include "../ItemStack.h"


class SetItemDataFunction : LootItemFunction {

public:
    virtual ~SetItemDataFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    SetItemDataFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, RandomValueBounds &);
};
