#pragma once

#include "../bedrock/item/condition/LootItemCondition.h"
#include "../json/Value.h"
#include <vector>
#include <memory>
#include "../bedrock/util/Random.h"
#include "LootTableContext.h"


namespace LootItemConditions {

    void deserialize(Json::Value);
    void allApply(std::vector<std::unique_ptr<LootItemCondition>> const&, Random &, LootTableContext &);
};
