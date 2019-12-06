#pragma once

class LootItemKilledByActorCondition : LootItemCondition {

public:
    virtual ~LootItemKilledByActorCondition();
    virtual void applies(Random &, LootTableContext &);

    void LootItemKilledByActorCondition(ActorDefinitionIdentifier);
    void deserialize(Json::Value);
};
