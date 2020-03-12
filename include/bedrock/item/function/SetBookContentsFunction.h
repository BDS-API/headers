#pragma once

#include <memory>
#include <vector>
#include <string>
#include "../../../json/Value.h"
#include "LootItemFunction.h"


class SetBookContentsFunction : LootItemFunction {

public:
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    ~SetBookContentsFunction();
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
    SetBookContentsFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::string const&, std::string const&, std::vector const&, std::allocator<std::string>);
    void _fillUserData(CompoundTag &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
