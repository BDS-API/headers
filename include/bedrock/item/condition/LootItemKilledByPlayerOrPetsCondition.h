#pragma once

#include "../../../unmapped/LootTableContext"
#include "../../../json/Value"
#include "../../util/Random"


class LootItemKilledByPlayerOrPetsCondition : LootItemCondition {

public:
    LootItemKilledByPlayerOrPetsCondition::~LootItemKilledByPlayerOrPetsCondition()
    virtual void applies(Random &, LootTableContext &);

    void deserialize(Json::Value);
    LootItemKilledByPlayerOrPetsCondition(void);
};
