#pragma once

#include "LootItemCondition.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "../../util/Random.h"


class LootItemKilledByPlayerCondition : LootItemCondition {

public:
    ~LootItemKilledByPlayerCondition();
    virtual void applies(Random &, LootTableContext &);
    LootItemKilledByPlayerCondition();
    void deserialize(Json::Value);
};
