#pragma once

#include <vector>
#include <memory>
#include "LootItemFunction.h"
#include <string>
#include "../../../json/Value.h"


class SetBookContentsFunction : LootItemFunction {

public:
    ~SetBookContentsFunction(); // _ZN23SetBookContentsFunctionD2Ev
    virtual void apply(ItemStack &, Random &, LootTableContext &); // _ZN23SetBookContentsFunction5applyER9ItemStackR6RandomR16LootTableContext
    virtual void apply(ItemInstance &, Random &, LootTableContext &); // _ZN23SetBookContentsFunction5applyER12ItemInstanceR6RandomR16LootTableContext
    void _fillUserData(CompoundTag &); // _ZN23SetBookContentsFunction13_fillUserDataER11CompoundTag
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &); // _ZN23SetBookContentsFunction11deserializeEN4Json5ValueERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS4_EESaIS7_EE
    SetBookContentsFunction(std::vector<std::unique_ptr<LootItemCondition>> &, std::string const&, std::string const&, std::vector const&, std::allocator<std::string>); // _ZN23SetBookContentsFunctionC2ERSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESG_RKS0_ISE_SaISE_EE
};
