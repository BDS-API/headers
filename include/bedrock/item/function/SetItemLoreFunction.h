#pragma once

#include "../condition/LootItemCondition.h"
#include <string>
#include "../../util/Random.h"
#include "../ItemInstance.h"
#include "../ItemStack.h"
#include <vector>
#include <memory>
#include "../../../json/Value.h"
#include "../../../unmapped/LootTableContext.h"
#include "LootItemFunction.h"


class SetItemLoreFunction : LootItemFunction {

public:
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    ~SetItemLoreFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    SetItemLoreFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::vector const&, std::allocator<std::char_traits<char>>);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
