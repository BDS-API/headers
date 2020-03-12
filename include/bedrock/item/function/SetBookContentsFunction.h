#pragma once

#include "../condition/LootItemCondition.h"
#include <string>
#include "../../util/Random.h"
#include "../ItemInstance.h"
#include "../ItemStack.h"
#include "../../nbt/CompoundTag.h"
#include <vector>
#include <memory>
#include "../../../json/Value.h"
#include "../../../unmapped/LootTableContext.h"
#include "LootItemFunction.h"


class SetBookContentsFunction : LootItemFunction {

public:
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ~SetBookContentsFunction();
    void _fillUserData(CompoundTag &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
    SetBookContentsFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::string const&, std::string const&, std::vector const&, std::allocator<std::string>);
};
