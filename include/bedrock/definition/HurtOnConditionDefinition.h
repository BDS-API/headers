#pragma once

#include <memory>


class HurtOnConditionDefinition {

public:
    HurtOnConditionDefinition(); // _ZN25HurtOnConditionDefinitionC2Ev
    ~HurtOnConditionDefinition(); // _ZN25HurtOnConditionDefinitionD2Ev
    void buildSchema(std::shared_ptr<JsonUtil::JsonSchemaObjectNode<JsonUtil::EmptyClass, HurtOnConditionDefinition>> &); // _ZN25HurtOnConditionDefinition11buildSchemaERSt10shared_ptrIN8JsonUtil20JsonSchemaObjectNodeINS1_10EmptyClassES_EEE
    void addDamageCondition(DamageCondition const&); // _ZN25HurtOnConditionDefinition18addDamageConditionERK15DamageCondition
    void deserializeData(Json::Value &); // _ZN25HurtOnConditionDefinition15deserializeDataERN4Json5ValueE
    void serializeData(Json::Value &)const; // _ZNK25HurtOnConditionDefinition13serializeDataERN4Json5ValueE
};
