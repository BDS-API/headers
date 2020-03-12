#pragma once

#include "../../../json/Value.h"
#include "../../util/Random.h"
#include "../../actor/unmapped/ActorDefinitionIdentifier.h"
#include "LootItemCondition.h"
#include "../../../unmapped/LootTableContext.h"


class LootItemKilledByActorCondition : LootItemCondition {

public:
    virtual void applies(Random &, LootTableContext &);
    ~LootItemKilledByActorCondition();
    void deserialize(Json::Value);
    LootItemKilledByActorCondition(ActorDefinitionIdentifier);
};
