#pragma once

#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemKilledByPlayerOrPetsCondition : LootItemCondition {

public:
    ~LootItemKilledByPlayerOrPetsCondition();
    virtual void applies(Random &, LootTableContext &);
    LootItemKilledByPlayerOrPetsCondition();
    void deserialize(Json::Value);
};
