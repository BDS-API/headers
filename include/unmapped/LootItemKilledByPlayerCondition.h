#pragma once

class LootItemKilledByPlayerCondition : LootItemCondition {

public:
    virtual LootItemKilledByPlayerCondition::~LootItemKilledByPlayerCondition();
    virtual void applies(Random &, LootTableContext &);

    void deserialize(Json::Value);
    LootItemKilledByPlayerCondition(void);
};
