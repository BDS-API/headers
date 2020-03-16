#pragma once

#include "LootItemFunction.h"
#include "../../../json/Value.h"
#include <vector>


class SetBannerDetailsFunction : public LootItemFunction {

public:
    virtual ~SetBannerDetailsFunction(); // _ZN24SetBannerDetailsFunctionD2Ev
    virtual void __fake_function0(); // fake
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN24SetBannerDetailsFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN24SetBannerDetailsFunction5applyER12ItemInstanceR6RandomR16LootTableContext
//    SetBannerDetailsFunction(std::vector<std::unique_ptr<LootItemCondition>> &, long); //TODO: incomplete function definition // _ZN24SetBannerDetailsFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EE15BannerBlockType
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN24SetBannerDetailsFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
};
