#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "./LootItemCondition.h"


class LootItemKilledByPlayerOrPetsCondition : LootItemCondition {

public:
    virtual ~LootItemKilledByPlayerOrPetsCondition();
    virtual void applies(Random &, LootTableContext &);

    void deserialize(Json::Value);
    LootItemKilledByPlayerOrPetsCondition();
};
