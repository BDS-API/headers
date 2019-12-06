#pragma once

class LootItemKilledByPlayerOrPetsCondition : LootItemCondition {

public:
    virtual ~LootItemKilledByPlayerOrPetsCondition();
    virtual void applies(Random &, LootTableContext &);

    void deserialize(Json::Value);
    void LootItemKilledByPlayerOrPetsCondition(void);
};
