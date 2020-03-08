#pragma once

#include "../../../json/Value"
#include "../../../unmapped/LootTableContext"
#include "../../util/Random"
#include "../../actor/unmapped/ActorDefinitionIdentifier"


class LootItemKilledByActorCondition : LootItemCondition {

public:
    LootItemKilledByActorCondition::~LootItemKilledByActorCondition()
    virtual void applies(Random &, LootTableContext &);

    LootItemKilledByActorCondition(ActorDefinitionIdentifier);
    void deserialize(Json::Value);
};
