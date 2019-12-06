#pragma once

class LootItemKilledByPlayerCondition : LootItemCondition {

public:
    virtual ~LootItemKilledByPlayerCondition();
    virtual void applies(Random &, LootTableContext &);

    void deserialize(Json::Value);
    void LootItemKilledByPlayerCondition(void);
};
