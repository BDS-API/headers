#pragma once

#include "../ItemInstance"
#include "../ItemStack"
#include "../../../json/Value"
#include "../condition/LootItemCondition"


class SetBannerDetailsFunction : LootItemFunction {

public:
    virtual SetBannerDetailsFunction::~SetBannerDetailsFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);

    SetBannerDetailsFunction(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &, BannerBlockType);
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> &);
};
