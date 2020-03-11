#pragma once

#include "../../util/Random.h"
#include "../../nbt/CompoundTag.h"
#include "../condition/LootItemCondition.h"
#include "../../../unmapped/LootTableContext.h"
#include <memory>
#include "./LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>
#include "../ItemInstance.h"
#include "../ItemStack.h"
#include <string>


class SetBookContentsFunction : LootItemFunction {

public:
    virtual ~SetBookContentsFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void _fillUserData(CompoundTag &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    SetBookContentsFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, std::string const&, std::string const&, std::vector const&, std::allocator<std::string>);
};
