#pragma once

class LootItemKilledByActorCondition : LootItemCondition {

public:
    virtual LootItemKilledByActorCondition::~LootItemKilledByActorCondition();
    virtual void applies(Random &, LootTableContext &);

    LootItemKilledByActorCondition(ActorDefinitionIdentifier);
    void deserialize(Json::Value);
};
