#pragma once

#include "../../../unmapped/ActorDefinitionIdentifier"
#include "../../../unmapped/Random"
#include "../../../json/Value"


class LootItemKilledByActorCondition : LootItemCondition {

public:
    virtual LootItemKilledByActorCondition::~LootItemKilledByActorCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemKilledByActorCondition(ActorDefinitionIdentifier);
    void deserialize(Json::Value);
};
