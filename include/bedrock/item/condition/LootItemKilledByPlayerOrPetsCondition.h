#pragma once

#include "LootItemCondition.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "../../util/Random.h"


class LootItemKilledByPlayerOrPetsCondition : LootItemCondition {

public:
    ~LootItemKilledByPlayerOrPetsCondition();
    virtual void applies(Random &, LootTableContext &);
    void deserialize(Json::Value);
    LootItemKilledByPlayerOrPetsCondition();
};
