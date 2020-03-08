#pragma once

#include "../bedrock/util/Random"
#include "../bedrock/item/condition/LootItemCondition"
#include "../json/Value"


class LootItemConditions {

public:

    void allApply(std::vector<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>, std::allocator<std::unique_ptr<LootItemCondition, std::default_delete<LootItemCondition>>>> const&, Random &, LootTableContext &);
    void deserialize(Json::Value);
};
