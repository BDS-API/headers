#pragma once

#include "../../../unmapped/Random"
#include "../../../json/Value"


class LootItemKilledByPlayerCondition : LootItemCondition {

public:
    virtual LootItemKilledByPlayerCondition::~LootItemKilledByPlayerCondition();
    virtual void applies(Random &, LootTableContext &);

    void deserialize(Json::Value);
    LootItemKilledByPlayerCondition(void);
};
