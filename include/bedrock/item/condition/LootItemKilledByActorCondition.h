#pragma once

#include "../../actor/unmapped/ActorDefinitionIdentifier.h"
#include "LootItemCondition.h"
#include "../../../json/Value.h"


class LootItemKilledByActorCondition : LootItemCondition {

public:
    virtual void applies(Random &, LootTableContext &);
    ~LootItemKilledByActorCondition();
    void deserialize(Json::Value);
    LootItemKilledByActorCondition(ActorDefinitionIdentifier);
};
