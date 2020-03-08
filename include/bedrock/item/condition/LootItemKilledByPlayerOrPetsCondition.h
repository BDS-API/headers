#pragma once

#include "../../../unmapped/Random"
#include "../../../json/Value"


class LootItemKilledByPlayerOrPetsCondition : LootItemCondition {

public:
    virtual LootItemKilledByPlayerOrPetsCondition::~LootItemKilledByPlayerOrPetsCondition();
    virtual void applies(Random &, LootTableContext &);

    void deserialize(Json::Value);
    LootItemKilledByPlayerOrPetsCondition(void);
};
