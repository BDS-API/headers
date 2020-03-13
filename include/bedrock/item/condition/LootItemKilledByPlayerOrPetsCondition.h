#pragma once

#include "../../../json/Value.h"
#include "LootItemCondition.h"


class LootItemKilledByPlayerOrPetsCondition : LootItemCondition {

public:
    ~LootItemKilledByPlayerOrPetsCondition(); // _ZN37LootItemKilledByPlayerOrPetsConditionD2Ev
    virtual void applies(Random &, LootTableContext &); // _ZN37LootItemKilledByPlayerOrPetsCondition7appliesER6RandomR16LootTableContext
    void deserialize(Json::Value); // _ZN37LootItemKilledByPlayerOrPetsCondition11deserializeEN4Json5ValueE
    LootItemKilledByPlayerOrPetsCondition(); // _ZN37LootItemKilledByPlayerOrPetsConditionC2Ev
};
