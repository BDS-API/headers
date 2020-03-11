#pragma once

#include "../../util/Random.h"
#include "../../../unmapped/LootTableContext.h"
#include "../../../json/Value.h"
#include "../../actor/unmapped/ActorDefinitionIdentifier.h"
#include "./LootItemCondition.h"


class LootItemKilledByActorCondition : LootItemCondition {

public:
    virtual ~LootItemKilledByActorCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemKilledByActorCondition(ActorDefinitionIdentifier);
    void deserialize(Json::Value);
};
