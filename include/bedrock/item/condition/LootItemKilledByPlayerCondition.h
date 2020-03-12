#pragma once

#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemKilledByPlayerCondition : LootItemCondition {

public:
    ~LootItemKilledByPlayerCondition();
    virtual void applies(Random &, LootTableContext &);
    void deserialize(Json::Value);
    LootItemKilledByPlayerCondition();
};
