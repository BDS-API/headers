#pragma once

#include "./LootTableContext.h"
#include "../json/Value.h"
#include "../bedrock/util/Random.h"
#include <memory>
#include <vector>
#include "../bedrock/item/condition/LootItemCondition.h"


class LootItemConditions {

public:

    void allApply(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> const&, Random &, LootTableContext &);
    void deserialize(Json::Value);
};
