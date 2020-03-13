#pragma once

#include <vector>
#include "../json/Value.h"


namespace LootItemConditions {

    void allApply(std::vector<std::unique_ptr<LootItemCondition>> const&, Random &, LootTableContext &); // _ZN18LootItemConditions8allApplyERKSt6vectorISt10unique_ptrI17LootItemConditionSt14default_deleteIS2_EESaIS5_EER6RandomR16LootTableContext
    void deserialize(Json::Value); // _ZN18LootItemConditions11deserializeEN4Json5ValueE
};
