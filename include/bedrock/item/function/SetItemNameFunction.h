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


class SetItemNameFunction : LootItemFunction {

public:
    ~SetItemNameFunction();
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    SetItemNameFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::string const&);
};
