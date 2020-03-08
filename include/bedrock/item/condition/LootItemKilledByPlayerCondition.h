#pragma once

#include "../../util/Random"
#include "../../../json/Value"
#include "../../../unmapped/LootTableContext"


class LootItemKilledByPlayerCondition : LootItemCondition {

public:
    virtual LootItemKilledByPlayerCondition::~LootItemKilledByPlayerCondition()
    virtual void applies(Random &, LootTableContext &);

    void deserialize(Json::Value);
    LootItemKilledByPlayerCondition(void);
};
