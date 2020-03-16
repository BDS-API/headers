#pragma once

#include "../../../json/Value.h"
#include "LootItemCondition.h"


class LootItemKilledByPlayerCondition : public LootItemCondition {

public:
    virtual ~LootItemKilledByPlayerCondition(); // _ZN31LootItemKilledByPlayerConditionD2Ev
    virtual void __fake_function0(); // fake
    virtual void applies(Random &, LootTableContext &); // _ZN31LootItemKilledByPlayerCondition7appliesER6RandomR16LootTableContext
    void deserialize(Json::Value); // _ZN31LootItemKilledByPlayerCondition11deserializeEN4Json5ValueE
    LootItemKilledByPlayerCondition(); // _ZN31LootItemKilledByPlayerConditionC2Ev
};
