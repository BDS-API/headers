#pragma once

#include "../condition/LootItemCondition.h"
#include "../../util/Random.h"
#include "../ItemInstance.h"
#include "../ItemStack.h"
#include <vector>
#include <memory>
#include "../../../json/Value.h"
#include "../../../unmapped/LootTableContext.h"
#include "LootItemFunction.h"


class SetBannerDetailsFunction : LootItemFunction {

public:
    ~SetBannerDetailsFunction();
    virtual void apply(ItemStack &, Random &, LootTableContext &);
    virtual void apply(ItemInstance &, Random &, LootTableContext &);
//  SetBannerDetailsFunction(std::vector<std::unique_ptr<LootItemCondition>> &, BannerBlockType); //TODO: incomplete function definition
    void deserialize(Json::Value, std::vector<std::unique_ptr<LootItemCondition>> &);
};
