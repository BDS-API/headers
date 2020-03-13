#pragma once

#include "../../../json/Value.h"
#include "LootItemFunction.h"
#include <vector>


class SetBannerDetailsFunction : LootItemFunction {

public:
    ~SetBannerDetailsFunction(); // _ZN24SetBannerDetailsFunctionD2Ev
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN24SetBannerDetailsFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN24SetBannerDetailsFunction5applyER12ItemInstanceR6RandomR16LootTableContext
//  SetBannerDetailsFunction(std::vector<std::unique_ptr<LootItemCondition>> &, BannerBlockType); //TODO: incomplete function definition // _ZN24SetBannerDetailsFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EE15BannerBlockType
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN24SetBannerDetailsFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
};
