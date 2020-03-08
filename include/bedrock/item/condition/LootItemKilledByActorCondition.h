#pragma once

#include "../../util/Random"
#include "../../../unmapped/LootTableContext"
#include "../../actor/unmapped/ActorDefinitionIdentifier"
#include "../../../json/Value"


class LootItemKilledByActorCondition : LootItemCondition {

public:
    virtual LootItemKilledByActorCondition::~LootItemKilledByActorCondition()
    virtual void applies(Random &, LootTableContext &);

    LootItemKilledByActorCondition(ActorDefinitionIdentifier);
    void deserialize(Json::Value);
};
