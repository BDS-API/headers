#pragma once

#include <vector>
#include "../json/Value.h"


namespace LootItemConditions {

    void deserialize(Json::Value);
    void allApply(std::vector<std::unique_ptr<LootItemCondition>> const&, Random &, LootTableContext &);
};
