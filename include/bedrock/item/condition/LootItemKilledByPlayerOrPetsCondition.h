#pragma once

#include "../../util/Random"
#include "../../../json/Value"
#include "../../../unmapped/LootTableContext"


class LootItemKilledByPlayerOrPetsCondition : LootItemCondition {

public:
    virtual LootItemKilledByPlayerOrPetsCondition::~LootItemKilledByPlayerOrPetsCondition()
    virtual void applies(Random &, LootTableContext &);

    void deserialize(Json::Value);
    LootItemKilledByPlayerOrPetsCondition(void);
};
