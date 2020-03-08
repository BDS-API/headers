#pragma once

#include "../../util/Random"
#include "../../nbt/CompoundTag"
#include "../../../unmapped/LootTableContext"
#include "../ItemInstance"
#include "../condition/LootItemCondition"
#include "../ItemStack"
#include "../../../json/Value"


class SetBookContentsFunction : LootItemFunction {

public:
    virtual SetBookContentsFunction::~SetBookContentsFunction()
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    void _fillUserData(CompoundTag &);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
    SetBookContentsFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, std::string const&, std::string const&, std::vector const&<std::string, std::allocator<std::string>>);
};
