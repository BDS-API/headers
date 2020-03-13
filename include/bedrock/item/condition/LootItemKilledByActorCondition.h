#pragma once

#include "../../../json/Value.h"
#include "../../actor/unmapped/ActorDefinitionIdentifier.h"
#include "LootItemCondition.h"


class LootItemKilledByActorCondition : LootItemCondition {

public:
    ~LootItemKilledByActorCondition(); // _ZN30LootItemKilledByActorConditionD2Ev
    virtual void applies(Random &, LootTableContext &); // _ZN30LootItemKilledByActorCondition7appliesER6RandomR16LootTableContext
    LootItemKilledByActorCondition(ActorDefinitionIdentifier); // _ZN30LootItemKilledByActorConditionC2E25ActorDefinitionIdentifier
    void deserialize(Json::Value); // _ZN30LootItemKilledByActorCondition11deserializeEN4Json5ValueE
};
