#pragma once

#include "../../../unmapped/LootTableContext"
#include "../../../json/Value"
#include "../../util/Random"


class LootItemKilledByPlayerCondition : LootItemCondition {

public:
    LootItemKilledByPlayerCondition::~LootItemKilledByPlayerCondition()
    virtual void applies(Random &, LootTableContext &);

    void deserialize(Json::Value);
    LootItemKilledByPlayerCondition(void);
};
